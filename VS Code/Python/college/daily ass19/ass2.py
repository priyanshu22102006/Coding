n = int(input("Enter nth number: "))
temp,a = 3,4
print(temp,end=" ")
for i in range(1,n):
    temp+=a
    print(temp,end=" ")
    a+=2
    