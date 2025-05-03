n = int(input("Enter nth number: "))
temp = 7
for i in range(1,n+1):
    print(temp,end=" ")
    temp += (14*i)