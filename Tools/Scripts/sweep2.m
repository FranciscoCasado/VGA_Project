
R = uint8(ones(120,160)*255);
G = uint8(ones(120,160)*0);
B = uint8(ones(120,160)*255);


minColor = 0;
maxColor = 255;
factor = 32;
%es wea + 1 * factor - 1

red = 255;
green = 255;
blue = 255;

block = 8;
counter = 0;
select = 1;

for j = 1:1:120
    for i = 1:1:160
        boxX = floor(double(i)/block);
        boxY = floor(double(j)/block);
        id = floor(160/block)*boxY + boxX;
        
        R(j,i) = 255 - rem(id,8)*32;
        G(j,i) = 255 - rem(floor(id/8),8)*32;
        B(j,i) = 255 - rem(floor(id/64),4)*64;
    end
end

id

    

image = uint8(R);
image(:,:,2)=uint8(G);
image(:,:,3)=uint8(B);

imshow(image)
imwrite(image,'sweep2.bmp')