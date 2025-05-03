# Palindrome 123454321
n=int(input())
temp = n
sum =''
while temp>0:
    sum += str(temp%10)
    temp //=10
if int(sum)== n:
    print("Bingo!")
else:
    print('You are cooked')
