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
	wire [14:0] pixel_addr;
	wire wen;
	
	assign x1 = x[9:2];
	assign y1 = y[9:2];
	assign pixel_addr = 160*y1 + x1;
	// realizar assert a que x [0,639] e y [0, 479] 
	assign wen = 0;
	 
	img_buffer mem (
    .clka(CLK_IN), 
    .wea(wen), 
    .addra(pixel_addr), 
    .dina(), 
    .douta(memRGB)
    );
	
endmodule
