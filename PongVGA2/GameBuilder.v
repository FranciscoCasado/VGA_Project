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
	input wire [3:0] playerScore,
	input wire [3:0] comScore,
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
	
	parameter playerScoreLabelXPosition = 74;
	parameter playerScoreLabelYPosition = 10;
	parameter comScoreLabelXPosition    = 82;
	parameter comScoreLabelYPosition    = 10;
	parameter midScoreDotsXPosition = (playerScoreLabelXPosition + comScoreLabelXPosition)/2; 
	
	wire [2:0] playerScoreXPosition;
	wire [2:0] playerScoreYPosition;
	wire [3:0] playerScorePosition;
	wire playerScorePixel;
	
	assign playerScoreXPosition = x1 - playerScoreLabelXPosition;
	assign playerScoreYPosition = y1 - playerScoreLabelYPosition;
	assign playerScorePosition = 3*playerScoreYPosition + playerScoreXPosition;

	wire [2:0] comScoreXPosition;
	wire [2:0] comScoreYPosition;
	wire [3:0] comScorePosition;
	wire comScorePixel;
	
	assign comScoreXPosition = x1 - comScoreLabelXPosition;
	assign comScoreYPosition = y1 - comScoreLabelYPosition;
	assign comScorePosition = 3*comScoreYPosition + comScoreXPosition;
	
	reg [7:0] playerColor = 8'b11111111;
	reg [7:0] ballColor = 8'b11111111;
	reg [7:0] scoreColor = 8'b11111111;
	reg [7:0] backgroundColor = 8'b0000000;

	 
	always //@( posedge CLK_IN ) // Si presenta problemas poner un reloj mula
	begin
		if( x1 >= ballX &&
			 x1 <  ballX + block && 
			 y1 >= ballY &&
			 y1 <  ballY + block )
			 RGB_out = ballColor;
		else if( x1 <= playerXPos && 
					y1 < playerYPos + playerSize && 
					y1 >= playerYPos )
			RGB_out = playerColor;
		else if( x1 >= comXPos &&
					y1 < comYPos + playerSize && 
					y1 >= comYPos )
			RGB_out = playerColor;
		else if( x1 >= playerScoreLabelXPosition && 
			 x1 <  playerScoreLabelXPosition + 3 && 
			 y1 >= playerScoreLabelYPosition && 
			 y1 <  playerScoreLabelYPosition + 5 )
			RGB_out = (playerScorePixel == 1) ? scoreColor : backgroundColor ;
		else if( x1 >= comScoreLabelXPosition && 
			 x1 <  comScoreLabelXPosition + 3 && 
			 y1 >= comScoreLabelYPosition && 
			 y1 <  comScoreLabelYPosition + 5 )
			RGB_out = (comScorePixel == 1) ? scoreColor : backgroundColor ;
		else if( x1 == midScoreDotsXPosition + 1 && 
			(y1 == comScoreLabelYPosition + 1  
			 || y1 == comScoreLabelYPosition + 3))
				RGB_out = scoreColor ;
		else
			RGB_out = backgroundColor;
	end
	
	NumberGenerator playerScoreGenerator(
    .number(playerScore), 
    .position(playerScorePosition),
	 .pixel(playerScorePixel)
    );
	 
	 NumberGenerator comScoreGenerator(
    .number(comScore), 
    .position(comScorePosition),
	 .pixel(comScorePixel)
    );
	 
endmodule
