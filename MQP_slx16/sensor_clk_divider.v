`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:28:50 12/01/2016 
// Design Name: 
// Module Name:    sensor_clk_divider 
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
module sensor_clk_divider(
    input clk_3M,
	 input reset,
    output sensor_clk
    );
	reg [4:0]cntr = 0;
	
	assign sensor_clk = (cntr == 5'd19);
	
	
	//Divide 20MHz clock to 1MHz
	always @(posedge clk_3M, posedge reset)
	begin
		if(reset)
			cntr <= 0;
		else if (cntr == 5'd19)
			cntr <= 0;
		else
			cntr <= cntr + 1'b1;
	end

endmodule
