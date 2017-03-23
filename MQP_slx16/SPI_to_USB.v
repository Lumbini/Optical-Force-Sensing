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
	 //output reg beginData
    );
	 reg [7:0] MSB_shift_out;
	 reg [7:0] LSB_shift_out;
	 reg [2:0] sclk_sync;
	 reg [2:0] cs_sync;
	 reg [4:0] bit_cntr = 0;
	 reg ndata;
	 
	 assign MISO = (bit_cntr > 8)?MSB_shift_out[7]:LSB_shift_out[7]; //CR EDIT
	 always @(posedge clk)
		sclk_sync <= {sclk_sync[1:0], SPI_clk};
	 
	 always @(posedge clk)
		cs_sync <= {cs_sync[1:0], cs};
		
	 wire sclk_rising_edge = (sclk_sync[1:0] == 2'b01);
	 wire sclk_falling_edge = (sclk_sync[1:0] == 2'b10);
	 
	 wire cs_active = ~cs_sync[1];
	 
		
	 always @(posedge clk)
	 begin
		if(new_Data)
			ndata <= 1'b1;
		if(cs_active)
		begin
			//beginData <=0;
			if(sclk_falling_edge)
			begin
				if(bit_cntr > 8)
					MSB_shift_out <= {MSB_shift_out[6:0], 1'b0};
				else
					LSB_shift_out <= {LSB_shift_out[6:0], 1'b0};
				if(bit_cntr > 0)
					bit_cntr <= bit_cntr - 1'b1;
			end
			if((bit_cntr == 4'd0)&&(ndata))
			begin
				MSB_shift_out <= {2'b00, data1[11:7], 1'b1};
				LSB_shift_out <= {data1[6:0], 1'b0};
				ndata <= 1'b0;
				bit_cntr <= 5'd16;
				//beginData <= 1'b1;
			end
		end
		else
		if(ndata)
		begin
			MSB_shift_out <= {2'b00, data1[11:7], 1'b1};
			LSB_shift_out <= {data1[6:0], 1'b0};
			ndata <= 1'b0;
			bit_cntr <= 5'd16;
		end
	end

endmodule
