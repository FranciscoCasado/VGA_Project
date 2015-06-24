

def removeblanks(line):
    if line[0]==" ":
        return removeblanks(line[1:])
    return line
        

source = open("log.txt","r")
output = open("log_out.txt","w")

for line in source:
    line = removeblanks(line)

    
    if not line == "\n":
        output.write(line)
    

output.close()
