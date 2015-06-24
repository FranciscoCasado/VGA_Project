`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:01:44 06/08/2015 
// Design Name: 
// Module Name:    GameController 
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

// Positive Movement is DownScreen -> Positive pixel offset
// Negative Movement is UpScreen   -> Negative pixel offset
// tldr: image coordinates

module GameController(
    input  GAME_CLK,
	 input        reset,
    input  [1:0] BUTTONS,
	 output [7:0] ballX_out,
	 output [6:0] ballY_out,
	 output [6:0] playerYPos_out,
	 output [6:0] comYPos_out,
	 output [7:0] playerXPos_out,
	 output [7:0] comXPos_out,
	 output [3:0] playerScore,
	 output [3:0] comScore
    );
	 
	// Actor positions are the uper left corner !
	parameter H = 120;
	parameter W = 160;
	parameter block = 4;
	parameter playerSize = 8*block;
	 
	reg [7:0] ballX = 80;
	reg [6:0] ballY = 60;
	
	wire play;
	assign play = (playerScore != 10 && comScore !=10);
	
	assign ballX_out = ballX;
	assign ballY_out = ballY;

	reg [2:0] ballVX = 3'b001;
	reg [2:0] ballVY = 3'b001;
	
	reg  [6:0] playerYPos  = 0;
	reg  [6:0] comYPos     = 0;
	
	reg [3:0] playerScore_reg = 4'b0000;
	reg [3:0] comScore_reg    = 4'b0000;
	assign playerScore = playerScore_reg;
	assign comScore    = comScore_reg;
	
	wire [7:0] playerXPos;
	wire [7:0] comXPos;
	
	assign playerXPos      = block - 1;
	assign comXPos         = W - block; //
	
	assign playerYPos_out = playerYPos;
	assign comYPos_out    = comYPos;
	assign playerXPos_out = playerXPos;
	assign comXPos_out    = comXPos;	
	
	reg [7:0] ballNextX = 0;
	reg [6:0] ballNextY = 0;
	
	wire playerAction;
	wire comAction;
	
	assign playerAction = !BUTTONS[0];
	assign comAction    = !BUTTONS[1];
	
	// Single Sequential statements
	// This Clock can be changed to a lower value for debugging.
	always @( posedge GAME_CLK )
	begin
	
		// Check play comditions
		if(!play)
		begin
			if(reset)
			begin
				playerScore_reg = 0;
				comScore_reg    = 0;
				ballX = 80;
				ballY = 60;
			end
		end
		else
		begin
			// Player Movement
			begin
				if( !playerAction && playerYPos > 0 )
					playerYPos = playerYPos - 1;
				else if( playerAction && playerYPos + playerSize <= H - 1 )
					playerYPos = playerYPos + 1;
			end
		
			// Com movement
			begin
				if( !comAction && comYPos > 0 )
					comYPos = comYPos - 1;
				else if( comAction && comYPos + playerSize <= H - 1 )
					comYPos = comYPos + 1;
			end
			
			// Pre calculate Next Ball Pos without players
			// Goal Conditions
			if( ballX == 0 )
			begin
				ballNextX = 80;
				ballNextY = 60;
				comScore_reg = comScore_reg + 1;
			end
			else if( ballX == W - 1 - block )
			begin
				ballNextX = 80;
				ballNextY = 60;
				playerScore_reg = playerScore_reg + 1;
			end
			// Wall Collision
			else if( ballY == 0 || ballY == H - 1 - block)
			begin
				ballVY[2]     = ~ballVY[2];
				ballNextX     = ( ballVX[2] == 0 ) ? ballX - 1 : ballX + 1;
				ballNextY     = ( ballVY[2] == 0 ) ? ballY - 1 : ballY + 1;
			end
			else
			begin
				ballNextX     = ( ballVX[2] == 0 ) ? ballX - 1 : ballX + 1;
				ballNextY     = ( ballVY[2] == 0 ) ? ballY - 1 : ballY + 1;
			end
			
			// Check whether a collision may occur with player
			if( ballNextX == 0 && ballVX[2] == 0 )
			begin
				if( playerYPos > ballNextY || playerYPos + playerSize < ballNextY )
				begin
					// Ball Escaped Collision
					ballX = ballNextX;
					ballY = ballNextY;
				end
				else
				begin
					// There is a collision
					ballVX[2] = 1;
					ballX = ballX + 1;
					ballY = ( ballVY[2] == 0 ) ? ballY - 1 : ballY + 1;
				end
			end
			// Check whether a collision may occur with com
			else if( ballNextX == W - 1 - block && ballVX[2] == 1 )
			begin
				if( comYPos > ballNextY || comYPos + playerSize < ballNextY )
				begin
					// Ball Escaped Collision
					ballX = ballNextX;
					ballY = ballNextY;
				end
				else
				begin
					// There is a collision
					ballVX[2] = 0;
					ballX = ballX - 1;
					ballY = ( ballVY[2] == 0 ) ? ballY - 1 : ballY + 1;
				end
			end
			else
			begin
				ballX = ballNextX;
				ballY = ballNextY;
			end
		end
	end
	

endmodule
