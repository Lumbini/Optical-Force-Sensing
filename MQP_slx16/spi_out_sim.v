`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:03:02 02/17/2017
// Design Name:   SPI_to_USB
// Module Name:   R:/MQP/MQP_slx16/spi_out_sim.v
// Project Name:  MQP_slx16
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SPI_to_USB
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module spi_out_sim;

	// Inputs
	reg [11:0] data1;
	reg new_Data;
	reg clk;
	reg SPI_clk;
	reg cs;
	reg clk_8Megs;
	reg clk_1Megs;
	
	//clocks
	//sys clock
	always
	begin
		clk_8Megs = 0;
		#125; //125ns delay
		clk_8Megs = 1;
		#125;
	end

	//spi clock
	always
	begin
		clk_1Megs = 0;
		#1000;
		clk_1Megs = 1;
		#1000;
	end
	
	
	// Outputs
	wire MISO;

	// Instantiate the Unit Under Test (UUT)
	SPI_to_USB uut (
		.data1(data1), 
		.new_Data(new_Data), 
		.clk(clk_8Megs), 
		.SPI_clk(clk_1Megs), 
		.cs(cs), 
		.MISO(MISO)
	);
	

		
	initial begin
		// Initialize Inputs
		data1 = 0;
		new_Data = 0;
		clk = 0;
		SPI_clk = 0;
		cs = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
        
		// Add stimulus here

	end
      
endmodule

