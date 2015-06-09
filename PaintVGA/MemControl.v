`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:26:40 06/09/2015 
// Design Name: 
// Module Name:    MemControl 
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
module MemControl(
	 input CLK_IN,
    input [7:0] xCoord_w,
    input [7:0] yCoord_w,
    input [9:0] xCoord_a,
    input [9:0] yCoord_a,
    output wire [14:0] pix_address,
    output reg wen
    );
	
	wire [7:0] x_w;
	wire [7:0] y_w;
	wire [14:0] pix_addr_w;
	
	wire [7:0] x_a;
	wire [7:0] y_a;
	
		//Adjust 640*480 to 160*120; VGA asking
	assign x_a = xCoord_a[9:2];
	assign y_a = yCoord_a[9:2];
	assign pix_address = 160*y_a + x_a;
		
	assign x_w = xCoord_w;
	assign y_w = yCoord_w;
	assign pix_addr_w = 160*y_w + x_w;
	
	always @(posedge CLK_IN)
	begin
		if (pix_address== pix_addr_w)
			wen <= 1;
		else
			wen <=0;
	end
	
	
	
	
	

endmodule
