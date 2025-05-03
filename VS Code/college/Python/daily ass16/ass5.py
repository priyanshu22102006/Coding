n = int(input("Enter nth number: "))

temp,a = 5,7
for i in range(1,n+1):
    print(temp,end=" ")
    temp+=a
    a+=2