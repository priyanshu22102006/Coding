# 4. Write a Python program to read a number and find their product after
# exchanging last digits. If inputs are 348 and 31 then output is 12958
# (341*38). 

num1 = int(input("Enter a number1 : "))
num2 = int(input("Enter a number2 : "))

last1 = num1 % 10  # last1 = 8
num1 //= 10
#num1 = int(num1)  # num1 = 34

last2 = num2 % 10  # last2 = 1
num2 //= 10
#num2 = int(num2)   # num2 = 3
num2 = (num2 * 10) + last1
num1 = (num1 * 10) + last2

multi = num1 * num2

print(multi)
