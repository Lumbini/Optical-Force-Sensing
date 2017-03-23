`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:24:39 03/17/2017
// Design Name:   Serial_Sample_Control
// Module Name:   R:/MQP/MQP_slx16/sample_control_test.v
// Project Name:  MQP_slx16
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Serial_Sample_Control
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sample_control_test;

	// Inputs
	reg sensor_clk;
	reg reset;

	// Outputs
	wire serial_out;

	// Instantiate the Unit Under Test (UUT)
	Serial_Sample_Control uut (
		.sensor_clk(sensor_clk), 
		.reset(reset), 
		.serial_out(serial_out)
	);

	always
	begin
	sensor_clk = 0;
	#2500;
	sensor_clk = 1;
	#2500;
	end

	initial begin
		// Initialize Inputs
		sensor_clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
      reset = 1;
		#50;
		reset = 0;

	end
      
endmodule

