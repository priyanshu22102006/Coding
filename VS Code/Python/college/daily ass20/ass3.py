n = int(input("Enter nth number: "))
sum = 0
temp = 9
for i in range(1,n+1):
    print(sum,end=" ")
    sum+=temp
    temp+=4