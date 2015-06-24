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
	 
	always //@( posedge CLK_IN ) // Si presenta problemas poner un reloj mula
	begin
		if( x1 == 50 && y1 == 50 )
			RGB_out = 8'b11100011;
		else if( x1 >= ballX 				  &&
			 x1 <  ballX + block && 
			 y1 >= ballY 				  &&
			 y1 <  ballY + block )
			 RGB_out = 8'b11111111;
		else if( x1 <= playerXPos && 
					y1 < playerYPos + playerSize && 
					y1 >= playerYPos )
			RGB_out = 8'b11111111;
		else if( x1 >= comXPos && //why only hardcode
					y1 < comYPos + playerSize && 
					y1 >= comYPos )
			RGB_out = 8'b11111111;
		else
			RGB_out = 8'b00000000;
	end
	 
endmodule