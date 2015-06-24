`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:57:37 06/08/2015
// Design Name:   ImageController
// Module Name:   C:/VGAProject/PaletteDisplay256/PaletteGeneratorFixture.v
// Project Name:  PaletteDisplay256
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ImageController
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PaletteGeneratorFixture;

	// Inputs
	reg CLK_IN;
	reg FRAME_CLOCK;
	reg [9:0] x;
	reg [9:0] y;

	// Outputs
	wire [7:0] memRGB;

	// Instantiate the Unit Under Test (UUT)
	ImageController uut (
		.CLK_IN(CLK_IN), 
		.FRAME_CLOCK(FRAME_CLOCK), 
		.x(x), 
		.y(y), 
		.memRGB(memRGB)
	);

	initial begin
		// Initialize Inputs
		CLK_IN = 0;
		FRAME_CLOCK = 0;
		x = 0;
		y = 0;
	end
	
	always
		#1 FRAME_CLOCK = ~FRAME_CLOCK;

	
	always @(posedge FRAME_CLOCK)
	begin
		if(x == 639)
		begin
			x = 0;
			if( y == 479 )
				y = 0;
			else
				y = y + 1;
		end
		else
			x = x + 1;
	end
      
endmodule

