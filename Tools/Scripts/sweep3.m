
R = uint8(ones(120,160)*255);
G = uint8(ones(120,160)*0);
B = uint8(ones(120,160)*255);


minColor = 0;
maxColor = 255;


block = 8;
counter = 0;

width = 160;
height = 120;

levels = 8;
blueLevels = 4;
step = maxColor / (levels - 1);
blueStep = maxColor/ ( blueLevels - 1 );
maxId = maxColor;

disp(sprintf('Block size is: %d',block))
disp(sprintf('There are %d color levels',levels))
disp(sprintf('Step is %f',step))
disp(sprintf('There are %d blocks per line',width/block));

log = fopen('sweep3.log','w');
log2 = fopen('sweep3-id.log','w');


memoryFile = fopen('sweep3.coe','w');
fprintf( memoryFile, 'memory_initialization_radix=2;\n');
fprintf( memoryFile, 'memory_initialization_vector=\n');

for j = 0:1:119
    for i = 0:1:159
        boxX = floor(double(i)/block);
        boxY = floor(double(j)/block);
        id = rem(floor(160/block)*boxY + boxX,maxId+1);
        
        bin = dec2bin(id);
        while(length(bin)<8)
            bin=strcat('0',bin);
        end
        
        if(counter == id)
            fprintf(log2,'id=%d rgb=%s\n',id,bin);
            counter = counter + 1;
        end
        
        fprintf(log,'x=%d y=%d id=%d rgb=%s\n',i+1,j+1,id,bin);
        r = floor(bin2dec(bin(6:8))*step);
        g = floor(bin2dec(bin(3:5))*step);
        b = floor(bin2dec(bin(1:2))*blueStep);
        % use binary and slice to get number !
        
        R(j+1,i+1) = r;
        G(j+1,i+1) = g;
        B(j+1,i+1) = b;
        
        m_rgb = [ bin(6:8) bin(3:5) bin(1:2) ];
        
        if( j ==119 && i == 159)
            fprintf( memoryFile, '%s;', m_rgb);
        else
            fprintf( memoryFile, '%s,\n', m_rgb);
        end
        
        
    end
end


    

image = uint8(R);
image(:,:,2)=uint8(G);
image(:,:,3)=uint8(B);

imshow(image)
imwrite(image,'sweep3.bmp')