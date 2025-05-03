num = eval(input("Enter any number to find its factorial : "))
sum = 1
for i in range(2,num+1):
    sum = sum * i
print(sum)