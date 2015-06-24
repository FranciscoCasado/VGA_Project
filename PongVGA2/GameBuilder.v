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
	input wire [7:0] ballX,
	input wire [6:0] ballY,
	input wire [7:0] playerXPos,
	input wire [7:0] comXPos,
	input wire [6:0] playerYPos,
	input wire [6:0] comYPos,
	input wire [9:0] xCoord,
	input wire [9:0] yCoord,
	input wire [3:0] score,
	output reg [7:0] RGB_out
	);
	
	wire [7:0] x1;
	wire [7:0] y1;
	
	assign x1 = xCoord[9:2];
	assign y1 = yCoord[9:2];

	parameter block = 4;
	parameter playerSize = 8 * block;
	
	parameter H = 120;
   parameter W = 160;

	wire dot;
	
	wire [2:0] scoreXPosition;
	wire [2:0] scoreYPosition;
	wire [3:0] scorePosition;
	
	assign scoreXPosition = x1 - 70;
	assign scoreYPosition = y1 - 10;
	assign scorePosition = 3*scoreYPosition + scoreXPosition;

	 
	always //@( posedge CLK_IN ) // Si presenta problemas poner un reloj mula
	begin
		if( x1 >= 70 && 
			 x1 <  73 && 
			 y1 >= 10 && 
			 y1 <  15 )
			RGB_out = (dot == 1) ? 8'b11100000 : 8'b00011100 ; //  
		else if( x1 >= ballX &&
			 x1 <  ballX + block && 
			 y1 >= ballY &&
			 y1 <  ballY + block )
			 RGB_out = 8'b11111111;
		else if( x1 <= playerXPos && 
					y1 < playerYPos + playerSize && 
					y1 >= playerYPos )
			RGB_out = 8'b11111111;
		else if( x1 >= comXPos &&
					y1 < comYPos + playerSize && 
					y1 >= comYPos )
			RGB_out = 8'b11111111;
		else
			RGB_out = 8'b00000000;
	end
	
	NumberGenerator generator(
    .number(score), 
    .position(scorePosition),
	 .pixel(dot)
    );
	 
endmodule
