`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:39:54 06/09/2015 
// Design Name: 
// Module Name:    Cursor 
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
module Cursor(
	 input FRAME_CLK,
    input [3:0] SW,
    output reg [7:0] xCoord,
    output reg [7:0] yCoord,
    output [7:0] RGBw
    );
	 
	reg VEL = 0;
	integer count = 0;

	assign RGBw = 8'b11100000;
	
	

always @(posedge FRAME_CLK)
begin
	if (count == 5)
	begin
		VEL <= ~VEL;
		count <= 0;
	end
	else
	begin
		count <= count + 1;
	end
end

always @(posedge VEL)
begin
	if (SW[0]==1 && yCoord>0)
		xCoord <= xCoord + 1;
	else if (SW[1]==1)
		xCoord <= xCoord - 1;
	
	if (SW[2]==1 && yCoord<119)
		yCoord <= yCoord +1;
	else if (SW[3]==1 && yCoord>0)
		yCoord <= yCoord -1;
end

endmodule
