n = int(input("Enter nth number: "))
sum = 0
for i in range(1,n+1):
    if i<=1:
        sum += i 
    else:
        temp = 0 
        for j in range(0,i):
            temp += 4**j
        sum+=temp
print(sum)