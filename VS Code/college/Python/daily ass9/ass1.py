number = int(input("Enter nth number :"))

sum = 0
temp = 1
for i in range(1,number+1):
    sum += temp
    temp+=2
print(sum)