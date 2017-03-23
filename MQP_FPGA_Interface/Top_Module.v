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
	//Global Inputs
	input fpga_clk_P,
	input fpga_clk_N,
	input reset,
	//ADC 1
	input ADC1_SDATA0,
	input ADC1_SDATA1,
	output ADC1_CS,
	output ADC1_SCLK,
	/*//ADC 2
	input ADC2_SDATA0,
	input ADC2_SDATA1,
	output ADC2_CS,
	output ADC2_SCLK,
	//ADC 3
	input ADC3_SDATA0,
	input ADC3_SDATA1,
	output ADC3_CS,
	output ADC3_SCLK,*/
	
	//Sensor 1
	output SENSOR1_CLK,
	output SENSOR1_SI
	/*//Sensor 2
	output SENSOR2_CLK,
	output SENSOR2_SI,
	//Sensor 3
	output SENSOR3_CLK,
	output SENSOR3_SI*/
	);
	//Global Wires
	wire fpga_clk;
	wire clk_50M;
	wire clk_4M;
	wire lock;
	
	//SET 1 Wires
	wire [11:0] SET1_pdata0;
	wire [11:0] SET1_pdata1;
	wire SET1_SI_Pulse;
	wire ADC1_Internal_clk;
	wire ADC1_Internal_CS;
	wire Sensor1_Internal_clk;
	wire SET1_New_Data_Pulse;
	
	assign SENSOR1_SI = SET1_SI_Pulse;
	
	//Differential Clock Input
	IBUFDS #(
	.CAPACITANCE("DONT_CARE"),
	.DIFF_TERM("FALSE"),
	.IBUF_DELAY_VALUE("0"),
	.IFD_DELAY_VALUE("AUTO"),
	.IOSTANDARD("LVDS_33")
	)Differential_clk_IBUF(
	.O(fpga_clk),
	.I(fpga_clk_P),
	.IB(fpga_clk_N)
	);
	
	//Clock Manager
	  DCM_MQP Global_Clock_Manager
   (// Clock in ports
    .CLK_IN1(fpga_clk_P),      // IN
    // Clock out ports
    .CLK_OUT1(clk_50M),     // OUT
    .CLK_OUT2(clk_4M),     // OUT
    // Status and control signals
    .RESET(reset),// IN
    .LOCKED(lock));      // OUT
	
	//SET 1
	Serial_Sample_Control SET1_sample_control(Sensor1_Internal_clk, reset, SET1_SI_Pulse);
	
	sensor_clk_divider SET1_SCD(clk_4M, reset, Sensor1_Internal_clk);
	
	ADC_control SET1_ADC_Controller(
	ADC1_SDATA0,
	ADC1_SDATA1,
	clk_4M,
	Sensor1_Internal_clk,
	SET1_SI_Pulse,
	reset,
	ADC1_Internal_clk,
	ADC1_Internal_CS,
	SET1_pdata0,
	SET1_pdata1,
	SET1_New_DATA_Pulse);
	
	//SET1 ODDR2
	// Clock forwarding circuit using the double data-rate register
	// Spartan-3E/3A/6
	// Xilinx HDL Language Template, version 14.7
	ODDR2 #(
		.DDR_ALIGNMENT("NONE"), // Sets output alignment to "NONE", "C0" or "C1"
		.INIT(1'b0), // Sets initial state of the Q output to 1'b0 or 1'b1
		.SRTYPE("SYNC") // Specifies "SYNC" or "ASYNC" set/reset
	) ADC1_clk_forward (
		.Q(ADC1_SCLK), // 1-bit DDR output clk
		.C0(~ADC1_Internal_clk), // 1-bit clock input
		.C1(ADC_Internal_clk), // 1-bit clock input inverted
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
	) Sensor1_clk_forward (
		.Q(SENSOR1_CLK), // 1-bit DDR output clk
		.C0(~Sensor1_Internal_clk), // 1-bit clock input
		.C1(Sensor1_Internal_clk), // 1-bit clock input inverted
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
	) ADC1_CS_forward (
		.Q(ADC1_CS), // 1-bit DDR output clk
		.C0(~ADC1_Internal_CS), // 1-bit clock input
		.C1(ADC_Internal_CS), // 1-bit clock input inverted
		.CE(1'b1), // 1-bit clock enable input
		.D0(1'b0), // 1-bit data input (associated with C0)
		.D1(1'b1), // 1-bit data input (associated with C1)
		.R(1'b0), // 1-bit reset input
		.S(1'b0) // 1-bit set input
	);
	
	//SET 2
	
	//SET 3

endmodule
