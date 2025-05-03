n = int(input("Enter nth number: "))
sum = 0
for i in range(1,n+1):
    if i==1:
        sum += i
    else:
        temp = 0
        for j in range(1,i+1):
            temp+=j**2
        sum+=temp
print(sum)