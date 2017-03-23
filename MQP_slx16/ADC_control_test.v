`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:31:37 03/17/2017
// Design Name:   ADC_control
// Module Name:   R:/MQP/MQP_slx16/ADC_control_test.v
// Project Name:  MQP_slx16
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ADC_control
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ADC_control_test;

	// Inputs
	reg Serial_Data_In1;
	reg Serial_Data_In2;
	reg clk_4M;
	reg sensor_clk;
	reg sample_control;
	reg reset;
	
	reg [6:0]cntr;
	reg [4:0]counter;
	reg [11:0]data_storage;
	reg en;


	// Outputs
	wire ADC_clk;
	wire chip_select;
	wire [11:0] Parallel_Data_Out1;
	wire [11:0] Parallel_Data_Out2;
	wire new_Data;
	wire interrupt;

	// Instantiate the Unit Under Test (UUT)
	ADC_control uut (
		.Data1(Serial_Data_In1), 
		.Data2(Serial_Data_In2), 
		.clk_20M(clk_4M), 
		.sensor_clk(sensor_clk), 
		.sample_control(sample_control), 
		.reset(reset), 
		.ADC_clk(ADC_clk), 
		.chip_select(chip_select), 
		.pdata1(Parallel_Data_Out1), 
		.pdata2(Parallel_Data_Out2), 
		.new_Data(new_Data), 
		.interrupt(interrupt)
	);
	
	
	always
	begin
	clk_4M = 1;
	#125;
	clk_4M = 0;
	#125;
	end
	
	always
	begin
	sensor_clk = 1;
	#250;
	sensor_clk = 0;
	#4750;
	end
	
	
	always @(negedge sensor_clk, posedge reset)
	begin
		if(reset)
			cntr <= 0;
		else if(cntr == 128)
			cntr <= 0;
		else if(cntr == 1)
		begin
			sample_control <=1;
			cntr <= cntr+1'b1;
		end
		else
		begin
			cntr <= cntr +1'b1;
			sample_control <= 0;
		end
	end
	
	always @(negedge chip_select)
	begin
		en <=1;
	end

	always @(negedge clk_4M)
	begin
		if(en)
		begin
			if(counter > 12)
			begin
				Serial_Data_In1 <= 0;
				Serial_Data_In2 <= 0;
				counter <= counter-1'b1;
			end
			else 	if(counter > 0)
			begin
				data_storage <= {data_storage[10:0], 1'b0};
				Serial_Data_In1 <= data_storage[11];
				Serial_Data_In2 <= data_storage[11];
				counter <= counter - 1'b1;
			end
			else
			begin
				en <= 0;
				counter <= 16;
				data_storage <= 12'd2557;
			end
		end
	end

	initial begin
		// Initialize Inputs
		Serial_Data_In1 = 0;
		Serial_Data_In2 = 0;
		clk_4M = 0;
		sensor_clk = 0;
		sample_control = 0;
		reset = 0;
		counter = 0;
		cntr = 0;
		data_storage = 0;
		en = 1;

		// Wait 100 ns for global reset to finish
		#100;
				


	end
      
endmodule

