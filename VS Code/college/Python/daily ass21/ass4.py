num = int(input("Enter nth term : "))# num= 4
count = num-1
for i in range(0,num):
    # count = num-1
    print((" "*(i))+("*"*(2*(count+1)-1)))
    count-=1
