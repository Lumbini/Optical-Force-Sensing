`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:23:03 12/06/2016 
// Design Name: 
// Module Name:    ADC_control 
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
module ADC_control(
    input Data1,
    input Data2,
	 input clk_20M,
	 input sensor_clk,
	 input sample_control,
     input reset,
    output ADC_clk,
    output chip_select,
    output reg [11:0] pdata1,
    output reg [11:0] pdata2,
	 output reg new_Data
    );
	 reg [6:0]cntr = 0;
	 reg [4:0]sdata_cntr = 19;
	 reg chip_sel_en = 0;
	 reg delay_en = 0;
	 reg [11:0]shift_in1 = 0;
	 reg [11:0]shift_in2 = 0;
	 reg [2:0]cs_delay = 0;
	 
	 
	 assign chip_select = (cs_delay == 4'd2);
    assign ADC_clk = clk_20M;

	//Enable ADC Sampling for 128 Sensor Clock Cycles
	 always @(posedge sensor_clk)
	 begin
		if(sample_control)
		begin
			cntr <= 7'd127;
			delay_en <= 1'b1;
		end
		else if(cntr == 0)
		begin
			cntr <= 7'd127;
			delay_en <=0;
		end
		else
			cntr <= cntr - 1'b1;
	 end
		
	 always @(negedge ADC_clk)
	 begin
		if(delay_en & sensor_clk)
			cs_delay <= 3'd6;
		else if(cs_delay == 0)
			cs_delay <= 1'b1;
		else
			cs_delay <= cs_delay - 1'b1;
	 end
		
				
		//Shift in data from ADC	
		always @(posedge ADC_clk, posedge reset)
		begin
			if(reset)
			begin
				shift_in1 <= 16'b0;
				shift_in2 <= 16'b0;
			end
			else if(chip_select)
				sdata_cntr <= 0;
			else if(sdata_cntr == 5'd17)
			begin
				pdata1 <= shift_in1;
				pdata2 <= shift_in2;
				shift_in1 <= 16'b0;
				shift_in2 <= 16'b0;
				sdata_cntr <= sdata_cntr + 1'b1;
				new_Data <= 1'b1;
			end
			else if(sdata_cntr == 5'd20)
			begin
				sdata_cntr <= 19;
			end
			else
			begin
				shift_in1 <= {shift_in1[10:0], Data1};
				shift_in2 <= {shift_in2[10:0], Data2};
				sdata_cntr <= sdata_cntr + 1'b1;
				new_Data <= 1'b0;
			end
		end
		
endmodule