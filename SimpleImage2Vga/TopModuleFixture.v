`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:20:44 06/03/2015
// Design Name:   TopModule
// Module Name:   C:/Users/K n z o/Documents/Xilinx/SimpleImage2Vga/TopModuleFixture.v
// Project Name:  SimpleImage2Vga
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TopModule
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TopModuleFixture;

	// Inputs
	reg CLK_IN;

	// Outputs
	wire H_SYNC;
	wire V_SYNC;
	wire R;
	wire G;
	wire B;

	// Instantiate the Unit Under Test (UUT)
	TopModule uut (
		.CLK_IN(CLK_IN), 
		.H_SYNC(H_SYNC), 
		.V_SYNC(V_SYNC), 
		.R(R), 
		.G(G), 
		.B(B)
	);

	initial begin
		// Initialize Inputs
		CLK_IN = 0;

	end
	
	always
		#1 CLK_IN = ~CLK_IN;
      
endmodule

