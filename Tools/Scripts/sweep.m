
R = uint8(ones(120,160)*255);
G = uint8(ones(120,160)*0);
B = uint8(ones(120,160)*0);



red = -1;
for j=1:1:120
    red = 255;
    
    for i=1:1:160
        red = red - 1;
        R(j,i) = red;
    end
end

image = uint8(R);
image(:,:,2)=uint8(G);
image(:,:,3)=uint8(B);

imshow(image)
imwrite(image,'sweep.bmp')