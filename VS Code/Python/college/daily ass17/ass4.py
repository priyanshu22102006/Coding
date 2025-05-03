n = int(input("Enter nth number: "))
sum = 0

for i in range(1,n+1):
    sum += 1/(i**i)
print(sum)