`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:14:43 06/24/2015 
// Design Name: 
// Module Name:    NumberGenerator 
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
module NumberGenerator
(
	input wire [4:0] number,
	input wire [4:0] position,
	output reg pixel
	);

	parameter ZERO  = 4'b0000;
	parameter ONE   = 4'b0001;
	parameter TWO   = 4'b0010;
	parameter THREE = 4'b0011;
	parameter FOUR  = 4'b0100;
	parameter FIVE  = 4'b0101;
	parameter SIX   = 4'b0110;
	parameter SEVEN = 4'b0111;
	parameter EIGHT = 4'b1000;
	parameter NINE  = 4'b1001;
	
	// This are ordered backwards for correct display.
	reg [2:0] a = 3'b000;
	reg [2:0] b = 3'b100;
	reg [2:0] c = 3'b010;
	reg [2:0] d = 3'b110;
	reg [2:0] e = 3'b001;
	reg [2:0] f = 3'b101;
	reg [2:0] g = 3'b011;
	reg [2:0] h = 3'b111;
	
	// This are ordered backwards for correct display.
	wire [14:0] zero  = {h,f,f,f,h};
	wire [14:0] one   = {c,c,c,g,c};
	wire [14:0] two   = {h,e,h,b,h}; //{h,f,d,e,h}
	wire [14:0] three = {h,b,h,b,h}; //{h,b,h,b,h}
	wire [14:0] four  = {b,b,h,f,f}; //{f,f,h,b,b}
	wire [14:0] five  = {h,b,h,e,h}; //{h,e,h,b,h}
	wire [14:0] six   = {h,f,h,e,h}; //{h,e,h,f,h}
	wire [14:0] seven = {e,c,c,b,h}; //{h,b,c,c,e}
	wire [14:0] eight = {h,f,h,f,h};  //{h,f,h,f,h}
	wire [14:0] nine  = {h,b,h,f,h}; //{h,f,h,b,h}	
	
	always@(number, position)
	begin
		case(number)
			ZERO:  pixel = zero[position];
			ONE:   pixel = one[position];
			TWO:   pixel = two[position];
			THREE: pixel = three[position];
			FOUR:  pixel = four[position];
			FIVE:  pixel = five[position];
			SIX: 	 pixel = six[position];
			SEVEN: pixel = seven[position];
			EIGHT: pixel = eight[position];
			NINE:  pixel = nine[position];
			default: pixel = 0;
		endcase
	end
	
endmodule
