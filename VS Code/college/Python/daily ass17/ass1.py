n = int(input("Enter nth number: "))
temp = -1
count = 1
sum = 0

for i in range(1,n+1):
    sum+=temp
    temp+=(3*count)
    count+=2
print(sum)