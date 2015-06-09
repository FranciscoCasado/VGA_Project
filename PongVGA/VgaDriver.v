`timescale 1ns / 1ps


module VgaDriver(
	CLK_IN,
	H_SYNC,
	V_SYNC,
	RGB_in,
	RGB,
	xCoord,
	yCoord);

	input CLK_IN; // Runs at 50MHz
	input [7:0] RGB_in;
	
	output reg [7:0] RGB;
	
	reg PXL_CLK = 0; // Runs at 25MHz
	output H_SYNC; // Active Low Sync 
	output V_SYNC; // Active Low Sync
	
	reg [9:0] H_COUNT = 0; // Must count up to 800
	reg [9:0] V_COUNT = 0; // Must count up to 521
	
	output [9:0] xCoord;
	output [9:0] yCoord;
	
	integer count = 0;

	
	// Parameters set for a 640x480 resolution
	// Parameters are according to FPGA datasheet
	parameter H_CLOCKS        = 800;
	parameter H_PULSEW_CLOCKS =  96;
	parameter H_FRONTP_CLOCKS =  16;
	parameter H_DISP_CLOCKS   = 640;
	parameter H_BACKP_CLOCKS  =  48;
	
	parameter V_LINES        = 521;
	parameter V_PULSEW_LINES =   2;
	parameter V_FRONTP_LINES =  10;
	parameter V_DISP_LINES   = 480;
	parameter V_BACKP_LINES  =  29;
	
	integer mon;
	
	initial mon = $fopen("log.txt","w");
	

	// Generates Pixel Clock at 25MHz
	always @( posedge CLK_IN )
	begin
		PXL_CLK <= ~PXL_CLK;
	end

	// Generates Horizontal and Vertical Counters to track screen position
	always @( posedge PXL_CLK )
	begin
		count <= count + 40;
		$fdisplay(mon,"%d ns: %b %b %b %b %b",count,H_SYNC,V_SYNC,RGB[7:5],RGB[4:2],RGB[1:0]);
		if( H_COUNT + 1 == H_CLOCKS )
		begin
			H_COUNT <= 0;
			V_COUNT <= ( V_COUNT + 1 == V_LINES ) ? 0 : V_COUNT + 1;
		end
		else
		begin		
			H_COUNT <= H_COUNT + 1;
		end
	end
	
	// Generate Screen Syncs
	assign H_SYNC = ( H_COUNT < H_PULSEW_CLOCKS ) ? 0 : 1; // hsync is active low
	assign V_SYNC = ( V_COUNT < V_PULSEW_LINES  ) ? 0 : 1; // vsync is active low
	
	assign xCoord = ( H_COUNT >= H_PULSEW_CLOCKS + H_FRONTP_CLOCKS && 
							H_COUNT <  H_CLOCKS - H_BACKP_CLOCKS) ?
								H_COUNT - H_PULSEW_CLOCKS - H_FRONTP_CLOCKS : 0;
	assign yCoord = ( V_COUNT >= V_PULSEW_LINES  + V_FRONTP_LINES && 
							V_COUNT <  V_LINES         - V_BACKP_LINES) ?
								V_COUNT - V_PULSEW_LINES - V_FRONTP_LINES : 0;
	
	// Draw Image (whichever)
	// Screen Position is x = H_COUNT - H_PULSEW_CLOCKS - H_FRONTP_CLOCKS
	// 						 y = V_COUNT - V_PULSEW_LINES  - V_FRONTP_LINES
	always @( H_COUNT, V_COUNT )
	begin
		$display("%d",V_COUNT);
		// Check position is valid in the array
		if( H_COUNT >= H_PULSEW_CLOCKS + H_FRONTP_CLOCKS &&
			 H_COUNT <  H_CLOCKS        - H_BACKP_CLOCKS  &&
			 V_COUNT >= V_PULSEW_LINES  + V_FRONTP_LINES  &&
			 V_COUNT <  V_LINES         - V_BACKP_LINES)
		begin
			RGB <= RGB_in;
		end
		else
		begin
			RGB <= 8'b00011100;
		end
	end

endmodule