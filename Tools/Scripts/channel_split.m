
% This script takes a bmp image and gets output one
% image representing each channel.
% No other conversion os done than set the others channel to white (FFFFFF)

% Get file to split in channels
fileName = input('Please enter image name (without extension): ','s');

% Get image en its rgb channels
img = imread(strcat(fileName, '.bmp'));

[h w] = size(img(:,:,1));
white_channel = uint8(ones(h,w)*0);

r_channel_img = img(:,:,1);
r_channel_img(:,:,2) = white_channel;
r_channel_img(:,:,3) = white_channel;

g_channel_img = white_channel;
g_channel_img(:,:,2) = img(:,:,2);
g_channel_img(:,:,3) = white_channel;

b_channel_img = white_channel;
b_channel_img(:,:,2) = white_channel;
b_channel_img(:,:,3) = img(:,:,3);

imwrite(r_channel_img,strcat(fileName, '_r.bmp'));
imwrite(g_channel_img,strcat(fileName, 'g.bmp'));
imwrite(b_channel_img,strcat(fileName, '_b.bmp'));
