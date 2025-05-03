n = int(input("Enter nth number: "))
sum = 0

for i in range(1,n+1):
    fact=1
    temp = i
    while temp>1:
        fact*=temp
        temp-=1
    sum+=i/fact
print(sum)