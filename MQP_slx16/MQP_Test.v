`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:02:32 12/08/2016
// Design Name:   Top_Module
// Module Name:   R:/MQP/MQP_FPGA_Interface/MQP_Test.v
// Project Name:  MQP_FPGA_Interface
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Top_Module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MQP_Test;

	// Inputs
	reg fpga_clk;
	reg serial_data1;
	reg serial_data2;
	reg reset;
	reg [4:0]counter;
	reg en;
	reg SPI_clk;
	reg SPI_cs;
	reg [11:0] data_storage;
	reg [11:0] next_data;

	// Outputs
	wire SI1;
	wire sensor_clk;
	wire ADC_clk;
	wire chip_select;
	wire SPI_MISO;
	//CR START
	wire [11:0] Data1;
	//wire [11:0] Data2;
	wire clk_4M_out;
	//cr end
	
	

	
	// Instantiate the Unit Under Test (UUT)
	Top_Module uut (
		.fpga_clk(fpga_clk), 
		.serial_data1(serial_data1),
		.serial_data2(serial_data2), 
		.reset(reset), 
		//CR start
		.SPI_clk(SPI_clk),
		.SPI_cs(SPI_cs),
		//cr end
		.SI1(SI1), 
		.sensor_clk(sensor_clk), 
		.ADC_clk(ADC_clk), 
		.chip_select(chip_select), 
		//CR start
		.SPI_MISO(SPI_MISO),
		.clk_4M_out(clk_4M_out),
		.DataOut(Data1)
		//.Data2(Data2)
		//CR END
	);
	
	always
	begin
		fpga_clk = 0;
		#5;
		fpga_clk = 1;
		#5;
	end
	
	always
	begin
		SPI_clk = 0;
		#125;
		SPI_clk = 1;
		#125;
	end
	
	always
	begin
		SPI_cs = 1;
		#512000;
		SPI_cs = 0;
		#512000;
	end
	
	always @(negedge chip_select)
	begin
		en <=1;
	end
	
	always @(negedge ADC_clk)
	begin
		if(en)
		begin
			if(counter > 12)
			begin
				serial_data1 <= 0;
				serial_data2 <= 0;
				counter <= counter-1'b1;
			end
		else 	if(counter > 0)
			begin
				data_storage <= {data_storage[10:0], 1'b0};
				serial_data1 <= data_storage[11];
				serial_data2 <= ~serial_data2;
				counter <= counter - 1'b1;
			end
			else
			begin
				en <= 0;
				counter <= 16;
				data_storage <= next_data;
				$display("Time:%t Next Data: %b Data Out: %b SI:%b",$time,next_data,data_storage, SI1); 
				next_data = next_data + 1'b1;
			end
		end
	end
	
	initial begin
		// Initialize Inputs
		reset = 0;
		serial_data1 = 0;
		serial_data2 = 0;
		counter = 16;
		en = 0;
		next_data = 0;
		

		// Wait 100 ns for global reset to finish
		reset = 1;
		#10;
		reset = 0;
		#5000000;
		reset = 1;
		#10;
      reset = 0;
	end
      
endmodule


