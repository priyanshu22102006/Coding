# Armstrong number (153) = 1^3 + 5^3 + 3^3 = 153
import math
def armstr(num):
    if num>=1 and num<=9:
        return math.pow(num,3)
    else:
        temp = num//10
        return (math.pow(num%10,3) + armstr(temp))
num = int(input())
temp = armstr(num)
if temp == num:
    print("Bingo!")
else:
    print("You are Cooked..")