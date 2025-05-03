# 2. Write a Python program to print the second last digit. If input is 427 then
# output is 2. 

num = eval(input("Enter a number : "))

secondLastDigit = num % 100
secondLastDigit //= 10
#secondLastDigit = int(secondLastDigit)

print(secondLastDigit)