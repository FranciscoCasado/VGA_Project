`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:39:50 06/09/2015 
// Design Name: 
// Module Name:    top_module 
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
module top_module(
	input CLK_IN,
	input [3:0] SW,
	output H_SYNC,
	output V_SYNC,
	output wire [2:0] R,
	output wire [2:0] G,
	output wire [1:0] B
	);
	
	wire [7:0] xCoord_w;
	wire [7:0] yCoord_w;
	
	wire [7:0] xCoord_a;
	wire [7:0] yCoord_a;
	
	wire [7:0] RGB_out;
	
	assign R = RGB_out[7:5];
	assign G = RGB_out[4:2];
	assign B = RGB_out[1:0];
	
	wire [7:0] RGB_a;
	wire [7:0] RGB_w;
	wire [14:0] pix_address;
	wire wen;
	

	VgaDriver VgaDriver(
	 CLK_IN,
	 H_SYNC,
	 V_SYNC,
	 RGB_a,
	 RGB_out,
	 xCoord_a,
	 yCoord_a
	 );
	
	canvas canvas(
	 .clka(CLK_IN), 
    .wea(wen), 
    .addra(pix_address), 
    .dina(RGB_w), 
    .douta(RGB_a)
    );
	 
	Cursor cursor(
	 .FRAME_CLK(V_SYNC),
    .SW(SW),
    .xCoord(xCoord_w),
    .yCoord(yCoord_w),
    .RGBw(RGB_w)
    );
	 
	MemControl mem_control(
	 .CLK_IN(CLK_IN),
    .xCoord_w(xCoord_w),
    .yCoord_w(yCoord_w),
    .xCoord_a(xCoord_a),
    .yCoord_a(yCoord_a),
    .pix_address(pix_address),
    .wen(wen)
    );

endmodule
