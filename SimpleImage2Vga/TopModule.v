`timescale 1ns / 1ps

module TopModule(
	CLK_IN,
	H_SYNC,
	V_SYNC,
	R,
	G,
	B);
	
	input CLK_IN;
	output [2:0] R;
	output [2:0] G;
	output [1:0] B;
	output H_SYNC;
	output V_SYNC;
	
	wire H_SYNC;
	wire V_SYNC;
	//wire [7:0] RGB_in;
	wire [7:0] RGB;
	wire [7:0] memRGB;
	wire [9:0] xCoord;
	wire [9:0] yCoord;
	

	
	assign R = RGB[7:5];
	assign G = RGB[4:2];
	assign B = RGB[1:0];
	
	VgaDriver driver(
    .CLK_IN(CLK_IN), 
    .H_SYNC(H_SYNC), 
    .V_SYNC(V_SYNC), 
    .RGB_in(memRGB), 
    .RGB(RGB), 
    .xCoord(xCoord), 
    .yCoord(yCoord)
    );
	 
	 ImageController controller (
    .CLK_IN(CLK_IN), 
    .FRAME_CLOCK(V_SYNC), 
    .x(xCoord), 
    .y(yCoord), 
    .memRGB(memRGB)
    );



endmodule
