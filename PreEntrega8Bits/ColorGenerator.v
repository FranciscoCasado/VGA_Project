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
module ColorGenerator(
	input wire CLK_IN,
	input wire [2:0] SWITCHES,
	input wire button,
	output reg [7:0] RGB_out
	);
	
	reg button_last;
	
	reg [2:0] channel = 2'b00;
	 
	always @( posedge CLK_IN ) // Si presenta problemas poner un reloj mula
	begin
		if( button && !button_last )
		begin
			case( channel)
				2'b00: channel = 2'b01;
				2'b01: channel = 2'b10;
				2'b10: channel = 2'b00;
			endcase
		end
		button_last = button;
		
		case( channel )
			2'b00: RGB_out[7:5] = SWITCHES;
			2'b01: RGB_out[4:2] = SWITCHES;
			2'b10: RGB_out[1:0] = SWITCHES[1:0];
		endcase
		
	end
endmodule
