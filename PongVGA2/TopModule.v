`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:10:36 06/08/2015 
// Design Name: 
// Module Name:    TopModule 
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
module TopModule(
	input CLK_IN,
	input [1:0] BUTTONS,
	output H_SYNC,
	output V_SYNC,
	output [2:0] R,
	output [2:0] G,
	output [1:0] B
	);

	wire [7:0] RGB;
	wire [7:0] RGB_tmp;
	assign R = RGB[7:5];
	assign G = RGB[4:2];
	assign B = RGB[1:0];
	
	wire [7:0] ballX;
	wire [6:0] ballY;

	wire [7:0] playerXPos;
	wire [7:0] comXPos;
	wire [6:0] playerYPos;
	wire [6:0] comYPos;
	
	wire [9:0] x;
	wire [9:0] y;
	
	reg GAME_CLOCK;
	
	
	GameController controller(
    .GAME_CLK(V_SYNC), 
    .BUTTONS(BUTTONS),
	 .playerXPos_out(playerXPos),
	 .comXPos_out(comXPos),
	 .playerYPos_out(playerYPos),
	 .comYPos_out(comYPos),
	 .ballX_out(ballX),
	 .ballY_out(ballY)
    );

	GameBuilder builder(
	 .CLK_IN(V_SYNC),
    .xCoord(x),
	 .yCoord(y),
	 .playerXPos(playerXPos),
	 .comXPos(comXPos),
	 .playerYPos(playerYPos),
	 .comYPos(comYPos),
	 .ballX(ballX),
	 .ballY(ballY),
    .RGB_out(RGB_tmp)
    );


	VgaDriver driver (
    .CLK_IN(CLK_IN), 
    .H_SYNC(H_SYNC), 
    .V_SYNC(V_SYNC), 
    .RGB_in(RGB_tmp), 
    .RGB(RGB), 
    .xCoord(x), 
    .yCoord(y)
    );


	

endmodule
