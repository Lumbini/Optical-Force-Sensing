`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:09:38 03/22/2017
// Design Name:   sensor_clk_divider
// Module Name:   R:/MQP/MQP_slx16/sensor_clk_test.v
// Project Name:  MQP_slx16
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sensor_clk_divider
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sensor_clk_test;

	// Inputs
	reg clk_4M;
	reg reset;

	// Outputs
	wire sensor_clk;

	// Instantiate the Unit Under Test (UUT)
	sensor_clk_divider uut (
		.clk_3M(clk_4M), 
		.reset(reset), 
		.sensor_clk(sensor_clk)
	);
	
	always
	begin
	clk_4M = 1;
	#125;
	clk_4M = 0;
	#125;
	end

	initial begin
		// Initialize Inputs
		clk_4M = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
		reset = 1;
		#50;
		reset = 0;
		

	end
      
endmodule

