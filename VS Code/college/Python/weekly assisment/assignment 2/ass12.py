num = eval(input("Enter nth natural number :"))

sum = 0
for i in range(1,num+1):
    sum = sum + i**2
print(sum)