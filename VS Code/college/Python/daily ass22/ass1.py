num = int(input("Enter nth term : "))# num= 4
a = 1
for i in range(1,num+1):
    for j in range(0,i):
        print(a,end="")
    print()
    a += 1