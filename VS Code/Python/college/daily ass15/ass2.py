# 2. 0 1 2 5 12 29 70 169 408 985….. (Pell Numbers Series)
num = int(input("Enter nth number : "))
a = 0
b = 1
print(a,b,end=" ")
for i in range(1,num+1):
    c = 2*b + a 
    a = b
    b = c
    print(c,end = " ")
