n = int(input("Enter nth number: "))
temp = 1
for i in range(1,n+1):
    print(temp,end=" ")
    temp *= (i+2)