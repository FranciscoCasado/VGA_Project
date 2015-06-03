`timescale 1ns / 1ps


module TopModule(
	CLK_IN,
	R,
	G,
	B,
	H_SYNC,
	V_SYNC);

	input CLK_IN; // Runs at 50MHz
	output reg R, G, B;
	
	reg PXL_CLK; // Runs at 25MHz
	output H_SYNC; // Active Low Sync 
	output V_SYNC; // Active Low Sync
	
	integer H_COUNT = 0;
	integer V_COUNT = 0; 
	
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
		count <= count + 40;
		$fdisplay(mon,"%d ns: %b %b %b00 %b00 %b00",count,H_SYNC,V_SYNC,R,G,B);
	end

	// Generates Horizontal and Vertical Counters to track screen position
	always @( posedge PXL_CLK )
	begin
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
	
	// Draw Image (whichever)
	// Screen Position is x = H_COUNT - H_PULSEW_CLOCKS - H_FRONTP_CLOCKS
	// 						 y = V_COUNT - V_PULSEW_LINES  - V_FRONTP_LINES
	always @( H_COUNT, V_COUNT )
	begin
		$display("%d y %d",H_COUNT,V_COUNT);
		// Check position is valid in the array
		if( H_COUNT >= H_PULSEW_CLOCKS + H_FRONTP_CLOCKS &&
			 H_COUNT <  H_CLOCKS        - H_BACKP_CLOCKS  &&
			 V_COUNT >= V_PULSEW_LINES  + V_FRONTP_LINES  &&
			 V_COUNT <  V_LINES         - V_BACKP_LINES)
		begin
		   //$display("got there");
			if((H_COUNT - H_PULSEW_CLOCKS - H_FRONTP_CLOCKS <= 320 &&
				 H_COUNT - H_PULSEW_CLOCKS - H_FRONTP_CLOCKS >= 319) ||
				(V_COUNT - V_PULSEW_LINES  - V_FRONTP_LINES  <= 240 &&
				 V_COUNT - V_PULSEW_LINES  - V_FRONTP_LINES  >= 239))
			begin
				R <= 0;
				G <= 1;
				B <= 0;
			end
			else if( H_COUNT - H_PULSEW_CLOCKS - H_FRONTP_CLOCKS <= 639 &&
						H_COUNT - H_PULSEW_CLOCKS - H_FRONTP_CLOCKS >= 638)
			begin
				R <= 1;
				G <= 1;
				B <= 1;			
			end
			else if( V_COUNT - V_PULSEW_LINES  - V_FRONTP_LINES <= 479 &&
						V_COUNT - V_PULSEW_LINES  - V_FRONTP_LINES >= 478)
			begin
				R <= 1;
				G <= 1;
				B <= 1;				
			end
			else if( H_COUNT - H_PULSEW_CLOCKS - H_FRONTP_CLOCKS <= 1 &&
						H_COUNT - H_PULSEW_CLOCKS - H_FRONTP_CLOCKS >= 0)
			begin
				R <= 0;
				G <= 0;
				B <= 1;			
			end
			else if( V_COUNT - V_PULSEW_LINES  - V_FRONTP_LINES <= 1 &&
						V_COUNT - V_PULSEW_LINES  - V_FRONTP_LINES >= 0)
			begin
				R <= 0;
				G <= 0;
				B <= 1;				
			end
			else if( V_COUNT - V_PULSEW_LINES  - V_FRONTP_LINES  <= 120 &&
						V_COUNT - V_PULSEW_LINES  - V_FRONTP_LINES  >= 119 &&
						H_COUNT - H_PULSEW_CLOCKS - H_FRONTP_CLOCKS <= 160 &&
						H_COUNT - H_PULSEW_CLOCKS - H_FRONTP_CLOCKS >= 159)
			begin
				R <= 1;
				G <= 1;
				B <= 0;
			end
			else
			begin
				R <= 1;
				G <= 0;
				B <= 1;
			end
		end
		else
		begin
			R <= 0;
			G <= 0;
			B <= 0;
		end
	end

endmodule
