function s = fillZerosUp3(input)
    s = input;
    if( length( input ) ~= 3 )
        input = [ '0' input ]; 
        s = fillZerosUp3( input );
    end
    
    if(length(s)~=3)
        disp('mierda3')
        s
    end
end