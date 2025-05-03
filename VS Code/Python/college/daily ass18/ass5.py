n = int(input("Enter nth number: "))
temp,sum = 1,0
for i in range(1,n+1):
    sum += 1/(temp*(temp+2))
    temp+=2 
print(sum)