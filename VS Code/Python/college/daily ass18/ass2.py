n = int(input("Enter nth number: "))
sum = 0
for i in range(1,n+1):
    temp = "3"*i
    sum += int(temp)
print(sum)