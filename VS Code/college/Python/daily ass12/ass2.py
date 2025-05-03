import math
num1 = int(input("Enter 1st number :"))
num2 = int(input("Enter 2nd number :"))
if num1 and num2 > 0:
    print("The LCM of",num1,"and",num2,"is",math.lcm(num1,num2))
else:
    print("Please enter positive number..")
