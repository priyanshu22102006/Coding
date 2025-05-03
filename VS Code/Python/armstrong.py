# Armstrong number (153) = 1^3 + 5^3 + 3^3 = 153
import math
n=int(input())
temp = n
sum = 0
while temp>0:
    sum += math.pow(temp%10,3)
    temp//=10
if sum == n:
    print("Bingo!")
else:
    print("You are Cooked..")