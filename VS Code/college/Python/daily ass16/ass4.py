n = int(input("Enter nth number: "))

temp = 2
print(temp)
for i in range(1,n):
    if i%2==0:
        temp+=3
        print(temp)
    else:
        temp-=1
        print(temp)