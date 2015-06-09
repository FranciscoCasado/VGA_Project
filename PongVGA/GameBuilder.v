`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:59:08 06/08/2015 
// Design Name: 
// Module Name:    ColorGenerator 
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
module GameBuilder(
	input wire CLK_IN,
	input wire [4:0] ballX,
	input wire [3:0] ballY,
	input wire [3:0] playerPos,
	input wire [3:0] comPos,
	input wire [9:0] xCoord,
	input wire [9:0] yCoord,
	output reg [7:0] RGB_out
	);
	
	wire [4:0] x1;
	wire [4:0] y1;
	
	assign x1 = xCoord[9:5];
	assign y1 = yCoord[9:5];

	parameter playerSize = 4;
	parameter H = 15;
   parameter W = 20;	
	 
	always @( posedge CLK_IN ) // Si presenta problemas poner un reloj mula
	begin
		if( x1 == ballX && y1 == ballY )
			RGB_out = 8'b11111111;
		else if( x1 == 0 && y1 <= playerPos + playerSize && y1 >= playerPos )
			RGB_out = 8'b11111111;
		else if( x1 == H - 1 && y1 <= comPos + playerSize && y1 >= comPos )
			RGB_out = 8'b11111111;
		else
			RGB_out = 8'b00000000;
	end
	 
endmodule
