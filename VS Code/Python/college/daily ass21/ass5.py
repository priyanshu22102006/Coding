num = int(input("Enter nth term : "))# num= 4
for i in range(1,num+1):
    a = 1
    for j in range(0,i):
        print(a,end="")
        a+=1
    print()