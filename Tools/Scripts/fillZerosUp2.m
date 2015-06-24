function s = fillZerosUp2(input)
    s = input;
    if( length( input ) ~= 2 )
        input = [ '0' input ]; 
        s = fillZerosUp2( input );
    end
    
    if(length(s)~=2)
        disp('mierda3')
        s
    end
end