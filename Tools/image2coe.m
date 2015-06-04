
% For now only images in 160*240 . . .
img = imread('c.bmp');
r_channel = img(:,:,1);
g_channel = img(:,:,2);
b_channel = img(:,:,3);


file = fopen('memory.coe','w');

fprintf( file, 'memory_initialization_radix=16;\n');
fprintf( file, 'memory_initialization_vector=\n');

r = '00000000';
g = '00000000';
b = '00000000';
for j = 1:1:120
    for i = 1:1:160
        r = dec2bin(floor((double(r_channel(j,i)))/32));
        g = dec2bin(floor((double(g_channel(j,i)))/32));
        b = dec2bin(floor((double(b_channel(j,i)))/64));
        %length( r )
        r = fillZerosUp3( r );
        g = fillZerosUp3( g );
        b = fillZerosUp2( b );
        %length( r )
        rgb = [r g b];

        if( j ==120 && i == 160)
            fprintf( file, '%s;', rgb );
        else
            fprintf( file, '%s,\n', rgb );
        end
    end
end
