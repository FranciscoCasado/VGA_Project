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
	input [2:0] SW,
	input BUTTON,
	output [7:0] LED,
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
	assign LED = RGB;
	
	ColorGenerator generator (
	 .CLK_IN(CLK_IN),
    .SWITCHES(SW), 
    .button(BUTTON), 
    .RGB_out(RGB_tmp)
    );


	VgaDriver driver (
    .CLK_IN(CLK_IN), 
    .H_SYNC(H_SYNC), 
    .V_SYNC(V_SYNC), 
    .RGB_in(RGB_tmp), 
    .RGB(RGB), 
    .xCoord(), 
    .yCoord()
    );


	

endmodule
