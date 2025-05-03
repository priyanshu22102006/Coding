num = int(input("Enter nth term : "))# num= 4
a = num
for i in range(num+1,1,-1):
    for j in range(1,i):
        print(a,end="")
    print()
    a -= 1