`timescale 1ns / 1ps

module ImageController(
    input  CLK_IN,
    input  FRAME_CLOCK,
    input  [9:0] x,
    input  [9:0] y,
    output reg [7:0] memRGB
    );

	always@(x,y)
	begin
		if(x>315 && x<325)
			memRGB[7:0] <= 8'b00000010;
		else
			memRGB[7:0] <= 8'b11111111;
	end
	
endmodule
