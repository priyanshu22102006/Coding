number = int(input("Enter number :"))
tem = number
sum = 0
while(number>0):
    temp = number % 10
    fact = 1 
    while temp>0:
        fact = fact * temp
        temp-=1
    sum = sum + fact
    number //= 10
if sum == tem:
    print("Peterson / Krishnamurthy number")
else:
    print("Not a peterson / krishnamurthy number")