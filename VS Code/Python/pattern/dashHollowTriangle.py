num = int(input("Enter a number : "))
for i in range(0,num):
    #print leading spaces
    print(" "*(num-i),end=" ")
    #print the slash and lines
    print("/"*(i-1)+".",end=" ")
    print("\ "*(i-1))
#print base
print("_"*(2*num-1))