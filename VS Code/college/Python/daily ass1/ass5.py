# 5. Write a Python program to print the sum of last two digits. If input is 13613
# then output is 1+3=4 

number = int(input("Enter a number : ")) 

last2_digit = number % 100   # 13
last = last2_digit % 10   # 3
last2 = (last2_digit//10)  # 1

add = last + last2

print(add)
