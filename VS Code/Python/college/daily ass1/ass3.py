# 3. Write a Python program to exchange the last two digits. If input is 23617
# then output is 23671. 

num = int(input("Enter a number : "))
num = int(num)

last2_digit = num % 100   # 17
num //= 100  
#num = int(num)  # 236
last = last2_digit % 10  # 7  
last2_digit //= 10
#last2_digit = int(last2_digit)  # last2_digit = 1
number = (num*100) + (last*10) + last2_digit

print(number)



