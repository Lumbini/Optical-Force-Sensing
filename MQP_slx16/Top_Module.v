`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:30:40 11/28/2016 
// Design Name: 
// Module Name:    Top_Module 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Top_Module(
	input fpga_clk,
	input serial_data1,
	input serial_data2,
	input reset,
	input SPI_clk,
	input SPI_cs,
	output SI1,
	output sensor_clk,
	output ADC_clk,
	output chip_select,
	output SPI_MISO,
	output interrupt
	//output clk_20M_out
    );
	 wire [11:0]Data1;
	 wire [11:0]Data2;
	 wire clk_20M; 
	 wire clk_8M;
	 wire lock;
	 wire sample_control_signal;
	 wire fake_reset = 0;
	 wire ADC_clk_int;
	 wire sensor_clk_int;
	 wire cs_int;
	 wire new_Data;
	 
	 assign SI1 = sample_control_signal;
	 //assign clk_20M_out = clk_20M;
	 
	 Serial_Sample_Control sample_control(sensor_clk_int, reset, sample_control_signal);
	 
	 sensor_clk_divider scd(clk_20M, reset, sensor_clk_int);
	 
	 ADC_control ADC1(serial_data1,
    serial_data2,
	 clk_20M,
	 sensor_clk_int,
	 sample_control_signal,
    reset,
    ADC_clk_int,
    cs_int,
    Data1,
    Data2,
	 new_Data,
	 interrupt
    );
	 
	 SPI_to_USB SPI_out(Data1,
	 new_Data,
	 clk_8M,
	 SPI_clk,
	 SPI_cs,
	 SPI_MISO);
	 
	 
	DCM_MQP clock_manager
   (// Clock in ports
    .CLK_IN1(fpga_clk),      // IN
    // Clock out ports
    .CLK_OUT1(clk_8M),     // OUT
    .CLK_OUT2(clk_20M),     // OUT
    // Status and control signals
    .RESET(fake_reset),// IN
    .LOCKED(lock));


	//ODDR2
	
	// Clock forwarding circuit using the double data-rate register
	// Spartan-3E/3A/6
	// Xilinx HDL Language Template, version 14.7
	ODDR2 #(
		.DDR_ALIGNMENT("NONE"), // Sets output alignment to "NONE", "C0" or "C1"
		.INIT(1'b0), // Sets initial state of the Q output to 1'b0 or 1'b1
		.SRTYPE("SYNC") // Specifies "SYNC" or "ASYNC" set/reset
	) clock_forward_inst (
		.Q(ADC_clk), // 1-bit DDR output clk
		.C0(~ADC_clk_int), // 1-bit clock input
		.C1(ADC_clk_int), // 1-bit clock input inverted
		.CE(1'b1), // 1-bit clock enable input
		.D0(1'b0), // 1-bit data input (associated with C0)
		.D1(1'b1), // 1-bit data input (associated with C1)
		.R(1'b0), // 1-bit reset input
		.S(1'b0) // 1-bit set input
	);
	
		ODDR2 #(
		.DDR_ALIGNMENT("NONE"), // Sets output alignment to "NONE", "C0" or "C1"
		.INIT(1'b0), // Sets initial state of the Q output to 1'b0 or 1'b1
		.SRTYPE("SYNC") // Specifies "SYNC" or "ASYNC" set/reset
	) clock_forward_inst_2 (
		.Q(sensor_clk), // 1-bit DDR output clk
		.C0(~sensor_clk_int), // 1-bit clock input
		.C1(sensor_clk_int), // 1-bit clock input inverted
		.CE(1'b1), // 1-bit clock enable input
		.D0(1'b0), // 1-bit data input (associated with C0)
		.D1(1'b1), // 1-bit data input (associated with C1)
		.R(1'b0), // 1-bit reset input
		.S(1'b0) // 1-bit set input
	);
	
			ODDR2 #(
		.DDR_ALIGNMENT("NONE"), // Sets output alignment to "NONE", "C0" or "C1"
		.INIT(1'b0), // Sets initial state of the Q output to 1'b0 or 1'b1
		.SRTYPE("SYNC") // Specifies "SYNC" or "ASYNC" set/reset
	) clock_forward_inst_3 (
		.Q(chip_select), // 1-bit DDR output clk
		.C0(~cs_int), // 1-bit clock input
		.C1(cs_int), // 1-bit clock input inverted
		.CE(1'b1), // 1-bit clock enable input
		.D0(1'b0), // 1-bit data input (associated with C0)
		.D1(1'b1), // 1-bit data input (associated with C1)
		.R(1'b0), // 1-bit reset input
		.S(1'b0) // 1-bit set input
	);


endmodule
