/*
* \file sample-dynamic.c
*
* \author FTDI
* \date 20110922
*
* Copyright © 2011 Future Technology Devices International Limited
* Company Confidential
*
* Project: libMPSSE
* Module: SPI Sample Application - Interfacing CM232H Cable to MCP23S08 8 Bit I/O Expander
* Refer to Applications Note AN_188 for operational details
* FTDI-USA Apps Project
* Revision History:
* 1.0  Initial version  *
*
*/

#include<stdio.h>
#include<stdlib.h>
#ifdef _WIN32
#include<windows.h>
#endif

#include "libMPSSE_spi.h"
#include "ftd2xx.h"

#ifdef _WIN32
#define GET_FUN_POINTER	GetProcAddress
#endif

#define SPI_DEVICE_BUFFER_SIZE		256
#define SPI_WRITE_COMPLETION_RETRY	10
#define CHANNEL_TO_OPEN			0	/*0 for first available channel, 1 for next... */
#define SPI_SLAVE_0				0
#define SPI_SLAVE_1				1
#define SPI_SLAVE_2				2

/* Options-Bit0: If this bit is 1 then it means that the transfer size provided is in bytes */
#define	SPI_TRANSFER_OPTIONS_SIZE_IN_BYTES			0x00000001
/* Options-Bit0: If this bit is 1 then it means that the transfer size provided is in bytes */
#define	SPI_TRANSFER_OPTIONS_SIZE_IN_BITS			0x00000001
/* Options-Bit1: if BIT1 is 1 then CHIP_SELECT line will be enables at start of transfer */
#define	SPI_TRANSFER_OPTIONS_CHIPSELECT_ENABLE		0x00000002
/* Options-Bit2: if BIT2 is 1 then CHIP_SELECT line will be disabled at end of transfer */
#define SPI_TRANSFER_OPTIONS_CHIPSELECT_DISABLE		0x00000004

typedef FT_STATUS(*pfunc_SPI_GetNumChannels)(uint32 *numChannels);
pfunc_SPI_GetNumChannels p_SPI_GetNumChannels;
typedef FT_STATUS(*pfunc_SPI_GetChannelInfo)(uint32 index, FT_DEVICE_LIST_INFO_NODE *chanInfo);
pfunc_SPI_GetChannelInfo p_SPI_GetChannelInfo;
typedef FT_STATUS(*pfunc_SPI_OpenChannel)(uint32 index, FT_HANDLE *handle);
pfunc_SPI_OpenChannel p_SPI_OpenChannel;
typedef FT_STATUS(*pfunc_SPI_InitChannel)(FT_HANDLE handle, ChannelConfig *config);
pfunc_SPI_InitChannel p_SPI_InitChannel;
typedef FT_STATUS(*pfunc_SPI_CloseChannel)(FT_HANDLE handle);
pfunc_SPI_CloseChannel p_SPI_CloseChannel;
typedef FT_STATUS(*pfunc_SPI_Read)(FT_HANDLE handle, uint8 *buffer, uint32 sizeToTransfer, uint32 *sizeTransfered, uint32 options);
pfunc_SPI_Read p_SPI_Read;
typedef FT_STATUS(*pfunc_SPI_Write)(FT_HANDLE handle, uint8 *buffer, uint32 sizeToTransfer, uint32 *sizeTransfered, uint32 options);
pfunc_SPI_Write p_SPI_Write;
typedef FT_STATUS(*pfunc_SPI_ReadWrite)(FT_HANDLE handle, uint8 *inBuffer, uint8 *outBuffer, uint32 sizeToTransfer, uint32 *sizeTransferred, uint32 transferOptions);
pfunc_SPI_ReadWrite p_SPI_ReadWrite;
typedef FT_STATUS(*pfunc_SPI_IsBusy)(FT_HANDLE handle, bool *state);
pfunc_SPI_IsBusy p_SPI_IsBusy;

uint32 channels;
uint8  LEDS = 0x00;
FT_HANDLE ftHandle;
ChannelConfig channelConf;
uint8 buffer[SPI_DEVICE_BUFFER_SIZE];
uint8 out_buffer[SPI_DEVICE_BUFFER_SIZE];

FT_STATUS write_byte()

{
	uint32 sizeToTransfer = 0;
	uint32 sizeTransfered = 0;
	bool writeComplete = 0;
	uint32 retry = 0;
	bool state;
	FT_STATUS status;

	/*Write command to configure 23S08's IODIR register as all outputs*/
	sizeToTransfer = 24;  //3 Bytes Opcodes and Data
	sizeTransfered = 0;
	buffer[0] = 0x40; // Opcode to select device 
	buffer[1] = 0x00; // Opcode for IODIR register
	buffer[2] = 0x00; // Data Packet - Make GPIO pins outputs
	status = p_SPI_Write(ftHandle, buffer, sizeToTransfer, &sizeTransfered,
		SPI_TRANSFER_OPTIONS_SIZE_IN_BITS |
		SPI_TRANSFER_OPTIONS_CHIPSELECT_ENABLE |
		SPI_TRANSFER_OPTIONS_CHIPSELECT_DISABLE);


	Sleep(5);  // short gap between writes

			   /* Write Data to 23S08's OLAT Register */
	sizeToTransfer = 24;  // 3 Bytes Opcodes + Data
	sizeTransfered = 0;
	buffer[0] = 0x40;  //  Opcode to select device
	buffer[1] = 0x0A;  //  Opcode for OLAT Register
	buffer[2] = LEDS;  //  Data to write to OLAT & LEDs
	status = p_SPI_Write(ftHandle, buffer, sizeToTransfer, &sizeTransfered,
		SPI_TRANSFER_OPTIONS_SIZE_IN_BITS |
		SPI_TRANSFER_OPTIONS_CHIPSELECT_ENABLE |
		SPI_TRANSFER_OPTIONS_CHIPSELECT_DISABLE);

	return status;
}

FT_STATUS read_byte()

{
	uint32 sizeToTransfer = SPI_DEVICE_BUFFER_SIZE * 8;
	uint32 sizeTransfered = 0;
	bool writeComplete = 0;
	uint32 retry = 0;
	bool state;
	FT_STATUS status;

	status = p_SPI_Read(ftHandle, buffer,
		sizeToTransfer, &sizeTransfered,
		SPI_TRANSFER_OPTIONS_SIZE_IN_BITS |
		SPI_TRANSFER_OPTIONS_CHIPSELECT_ENABLE |
		SPI_TRANSFER_OPTIONS_CHIPSELECT_DISABLE);


	//Sleep(5);  // short gap between writes


	return status;
}

int main()
{
#ifdef _WIN32
#ifdef _MSC_VER
	HMODULE h_libMPSSE;
#else
	HANDLE h_libMPSSE;
#endif
#endif

	FT_STATUS status;
	//FT_DEVICE_LIST_INFO_NODE devList;
	uint8 address = 0;
	channelConf.ClockRate = 8000000;
	channelConf.LatencyTimer = 5; // change this
	channelConf.configOptions = SPI_CONFIG_OPTION_MODE0 | SPI_CONFIG_OPTION_CS_DBUS3 | SPI_CONFIG_OPTION_CS_ACTIVELOW;
	channelConf.Pin = 0x00000000;/* FinalVal-FinalDir-InitVal-InitDir (for dir: 0=in, 1=out) */

								 // Load libMPSSE
#ifdef _WIN32
#ifdef _MSC_VER
	h_libMPSSE = LoadLibrary(L"libMPSSE.dll");

#endif
#endif

	// init function pointers
	p_SPI_GetNumChannels = (pfunc_SPI_GetNumChannels)GET_FUN_POINTER(h_libMPSSE, "SPI_GetNumChannels");
	p_SPI_GetChannelInfo = (pfunc_SPI_GetChannelInfo)GET_FUN_POINTER(h_libMPSSE, "SPI_GetChannelInfo");
	p_SPI_OpenChannel = (pfunc_SPI_OpenChannel)GET_FUN_POINTER(h_libMPSSE, "SPI_OpenChannel");
	p_SPI_InitChannel = (pfunc_SPI_InitChannel)GET_FUN_POINTER(h_libMPSSE, "SPI_InitChannel");
	p_SPI_Read = (pfunc_SPI_Read)GET_FUN_POINTER(h_libMPSSE, "SPI_Read");
	p_SPI_Write = (pfunc_SPI_Write)GET_FUN_POINTER(h_libMPSSE, "SPI_Write");
	p_SPI_ReadWrite = (pfunc_SPI_ReadWrite)GET_FUN_POINTER(h_libMPSSE, "SPI_ReadWrite");

	p_SPI_CloseChannel = (pfunc_SPI_CloseChannel)GET_FUN_POINTER(h_libMPSSE, "SPI_CloseChannel");

	status = p_SPI_GetNumChannels(&channels);
	printf("Version 5 = %d\n", channels);

	status = p_SPI_OpenChannel(CHANNEL_TO_OPEN, &ftHandle); // Open the first available channel

	status = p_SPI_InitChannel(ftHandle, &channelConf);

	//printf("Enter a hex value to display in binary -  ");

	//read in a hex value from standard input
	//scanf_s("%x" , &LEDS); 

	//printf("LED Display = %x   \n",LEDS);

	// Call Write Byte Function to activate LEDs on GPIO pins
	printf("ReadWriting\n");
	for (int i = 0; i < SPI_DEVICE_BUFFER_SIZE; i++) {
		buffer[i] = 0x41;
	}
	for (;;) {
		read_byte();
		for (int i = 0; i < SPI_DEVICE_BUFFER_SIZE; i++) {
			printf("%d ", buffer[i]);
		}
		printf("\n");
	}
	printf("End of SPI Demo");
	scanf_s("%x", &LEDS);
	status = p_SPI_CloseChannel(ftHandle);
}

