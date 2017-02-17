`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:01:24 01/24/2017 
// Design Name: 
// Module Name:    SPI_to_USB 
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
module SPI_to_USB(
    input [11:0] data1,
    input new_Data,
	 input clk,
	 input SPI_clk,
	 input cs,
    output MISO
    );
	 reg [15:0] shift_out;
	 reg [2:0] sclk_sync;
	 reg [2:0] cs_sync;
	 reg ndata;
	 
	 assign MISO = shift_out[15];
	 always @(posedge clk)
		sclk_sync <= {sclk_sync[1:0], SPI_clk};
	 
	 always @(posedge clk)
		cs_sync <= {cs_sync[1:0], cs};
		
	 wire sclk_rising_edge = (sclk_sync[2:1] == 2'b01);
	 wire sclk_falling_edge = (sclk_sync[2:1] == 2'b10);
	 
	 wire cs_active = ~cs_sync[1];
	 
		
	 always @(posedge clk)
	 begin
		if(new_Data)
			ndata <= 1'b1;
		if(cs_active)
		begin
			if(sclk_falling_edge)
				shift_out <={shift_out[14:0], 1'b0};
		end
		else
		if(ndata)
			shift_out <= {4'b0000, data1};
			ndata <= 1'b0;
	end

endmodule
