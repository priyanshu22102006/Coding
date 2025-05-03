n = int(input("Enter nth number: "))
a = 1
b = 3
c = 4

if n==1:
    print(a)
elif n==2:
    print(a,b,end=" ")
elif n==3:
    print(a,b,c,end=" ")
else:
    print(a,b,c,end=" ")
    for i in range(3,n+1):
        d=a+b+c
        print(d,end=" ")
        a=b
        b=c
        c=d
    