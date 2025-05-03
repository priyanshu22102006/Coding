# 5. 2 1 3 4 7 11 18 29 47 76……..(Lucas Numbers Series)
num = int(input("Enter nth term: "))
a = 2
b = 1

print(a,b,end=" ")
for i in range(1,num+1):
    c=a+b
    print(c,end=" ")
    a=b
    b=c