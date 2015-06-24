
% This script converts an image into a .coe file
% to be loaded into a RAM Block in ISE designs

% Image requisites are: 24bits  bitmap file, res 160x120px

% Get file to convert
fileName = input('Please enter image name: ','s');

% Get image en its rgb channels
img = imread(strcat(fileName, '.bmp'));
img(1,1,1)
img(1,1,2)
img(1,1,3)
r_channel = img(:,:,1);
g_channel = img(:,:,2);
b_channel = img(:,:,3);

% Open memory file and
memoryFile = fopen(strcat(fileName, '.coe'),'w');
fprintf( memoryFile, 'memory_initialization_radix=2;\n');
fprintf( memoryFile, 'memory_initialization_vector=\n');

r = '00000000';
g = '00000000';
b = '00000000';

for j = 1:1:120
    for i = 1:1:160
        r = dec2bin(floor((double(r_channel(j,i)))/32));
        g = dec2bin(floor((double(g_channel(j,i)))/32));
        b = dec2bin(floor((double(b_channel(j,i)))/64));
        
        % Modify pixel to generate theorical image
        r_channel(j,i) = uint8((floor((double(r_channel(j,i)))/32)+1)*32);
        g_channel(j,i) = uint8((floor((double(g_channel(j,i)))/32)+1)*32);
        b_channel(j,i) = uint8((floor((double(b_channel(j,i)))/64)+1)*64);
        
        % Fill with zeroes to form a 8bit pixel
        r = fillZerosUp3( r );
        g = fillZerosUp3( g );
        b = fillZerosUp2( b );
        
        % Join the channels
        rgb = [r g b];

%         if(r_channel(j,i)==192 && g_channel(j,i)==224 && b_channel(j,i)==128)
%             display('encontre');
%             strcmp(rgb,'10111010')
%             rgb
%             r
%             g
%             b
%         end
        
        % Write them into the coe file
        if( j ==120 && i == 160)
            fprintf( memoryFile, '%s;', rgb );
        else
            fprintf( memoryFile, '%s,\n', rgb );
        end
    end

    
    
end

% Write image to be happy
A = r_channel;
A(:,:,2) = g_channel;
A(:,:,3) = b_channel;

imshow(A)
imwrite(A,strcat(fileName, '_output.bmp'));

