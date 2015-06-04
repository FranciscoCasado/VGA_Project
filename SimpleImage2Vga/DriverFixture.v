`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:28:55 06/03/2015
// Design Name:   VgaDriver
// Module Name:   C:/Users/K n z o/Documents/Xilinx/SimpleImage2Vga/DriverFixture.v
// Project Name:  SimpleImage2Vga
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: VgaDriver
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DriverFixture;

	// Inputs
	reg CLK_IN;
	reg [7:0] RGB_in;

	// Outputs
	wire H_SYNC;
	wire V_SYNC;
	wire [7:0] RGB;
	wire [9:0] xCoord;
	wire [9:0] yCoord;

	// Instantiate the Unit Under Test (UUT)
	VgaDriver uut (
		.CLK_IN(CLK_IN), 
		.H_SYNC(H_SYNC), 
		.V_SYNC(V_SYNC), 
		.RGB_in(RGB_in), 
		.RGB(RGB), 
		.xCoord(xCoord), 
		.yCoord(yCoord)
	);

	initial begin
		// Initialize Inputs
		CLK_IN = 0;
		RGB_in = 8'b10000000;
		// Wait 100 ns for global reset to finis
        
		// Add stimulus here
	end
	
	always
	begin
		#1 CLK_IN = ~CLK_IN;
	end
endmodule

