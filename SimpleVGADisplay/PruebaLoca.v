`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:49:06 06/01/2015
// Design Name:   TopModule
// Module Name:   C:/Users/K n z o/Documents/Xilinx/VGADriver/PruebaLoca.v
// Project Name:  VGADriver
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

module PruebaLoca;

	// Inputs
	reg CLK_IN;

	// Outputs
	wire R;
	wire G;
	wire B;

	integer counter = 0;
	// Instantiate the Unit Under Test (UUT)
	/*TopModule uut (
		.CLK_IN(CLK_IN), 
		.R(R), 
		.G(G), 
		.B(B)
	);*/

	always
	begin
		#5
		$display("%d",counter);
		counter = counter + 1;
		if (counter == 1000) $finish;
	end
      
endmodule

