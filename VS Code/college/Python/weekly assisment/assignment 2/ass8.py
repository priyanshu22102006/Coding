number = int(input("Enter number :"))
tem = number
sum = 0
while(number>0):
    temp = number % 10
    sum = sum + temp**3
    number //= 10
if sum == tem:
    print("Armstrong number")
else:
    print("Not am armstrong number")