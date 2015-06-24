`timescale 1ns / 1ps

module ImageController(
    input  CLK_IN,
    input  FRAME_CLOCK,
    input  [9:0] x,
    input  [9:0] y,
    output [7:0] memRGB
    );
	
	wire [7:0] x1;
	wire [7:0] y1;
	wire [7:0] block;
	
	reg [7:0] foo = 8'b0;
	
	integer counter = 0;
	
	always @(posedge FRAME_CLOCK)
	begin
		if(counter == 5)
		begin
			counter <=0;
			foo <= foo + 1;
		end
		else
			counter <= counter + 1;
	end
	
	assign memRGB[7:5] = block[2:0]; // red
	assign memRGB[4:2] = block[5:3]; // green
	assign memRGB[1:0] = block[7:6]; // blue

	assign x1 = x[9:5];
	assign y1 = y[9:5];
	assign block = 20*y1 + x1 - foo; // 

	
endmodule
