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
    input GAME_CLK,
    input [1:0] BUTTONS,
	 output [4:0] ballX_out,
	 output [3:0] ballY_out,
	 output [3:0] playerPos_out,
	 output [3:0] comPos_out
    );
	 
	parameter H = 15;
	parameter W = 20;
	
	parameter playerSize = 4;
	 
	reg [4:0] ballX = 10;
	reg [3:0] ballY = 7;
	assign ballX_out = ballX;
	assign ballY_out = ballY;

	reg [2:0] ballVX = 3'b010;
	reg [2:0] ballVY = 3'b010;
	
	reg [3:0] playerPos     = 7;
	reg [3:0] comPos        = 7;
	assign playerPos_out = playerPos;
	assign comPos_out = comPos;
	
	reg [4:0] ballNextX = 0;
	reg [3:0] ballNextY = 0;
	
	wire playerAction;
	wire comAction;
	
	assign playerAction = !BUTTONS[0];
	assign comAction    = !BUTTONS[1];
	
	// Single Sequential statements
	always @( posedge GAME_CLK )
	begin
		// Player Movement
		begin
			if( !playerAction && playerPos > 0 )
				playerPos = playerPos - 1;
			else if( playerAction && playerPos + playerSize < H - 1 )
				playerPos = playerPos + 1;
		end
	
		// Com movement
		begin
			if( !comAction && comPos > 0 )
				playerPos = playerPos - 1;
			else if( comAction && comPos + playerSize < H - 1 )
				playerPos = playerPos + 1;
		end
		
		// Pre calculate Next Ball Pos without players
		// Goal Conditions
		if( ballX == 0 || ballX == W - 1 )
		begin
			ballNextX = 10;
			ballNextY = 7;
		end
		// Wall Collision
		else if( ballY == 0 || ballY == H - 1)
		begin
			ballVY[2] = ~ballVY[2];
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
			if( playerPos > ballNextY || playerPos + playerSize < ballNextY )
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
		// Check whether a collision may occur with player
		else if( ballNextX == H - 1 && ballVX[2] == 1 )
		begin
			if( playerPos > ballNextY || playerPos + playerSize < ballNextY )
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
	

endmodule
