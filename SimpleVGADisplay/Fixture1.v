`timescale 1ns / 1ps



module Fixture1;

	// Inputs
	reg CLK_IN;

	// Outputs
	wire R;
	wire G;
	wire B;

	// Instantiate the Unit Under Test (UUT)
	TopModule uut (
		.CLK_IN(CLK_IN), 
		.R(R), 
		.G(G), 
		.B(B)
	);

	initial 
	begin
		CLK_IN = 0;
	end
	
	always
	begin
		#1 CLK_IN = ~CLK_IN; 
	end
	

      
endmodule

