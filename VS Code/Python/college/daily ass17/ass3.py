n = int(input("Enter nth number: "))
sum = 0

for i in range(1,n+1):
    sum+=i**((i+1)**(i+2))
print(sum)