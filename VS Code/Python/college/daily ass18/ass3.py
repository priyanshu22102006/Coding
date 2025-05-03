n = int(input("Enter nth number: "))
sum = 0
for i in range(1,n+1):
    sum += (((i+2)**3) - ((i+1)**3))
print(sum)