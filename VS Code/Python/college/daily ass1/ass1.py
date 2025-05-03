# 1. Write a Python program to delete the last digit and print this. If input is
# 13613 then output is 3. 

num = eval(input("Enter a number : "))
last_digit = num % 10
num /= num
print(last_digit)