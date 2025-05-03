# Armstrong number (153) = 1^3 + 5^3 + 3^3 = 153
import math
def armstrong(x):
    sum=0
    temp = x
    for _ in range(len(str(x))):
        sum+=math.pow(x%10,3)
        x//=10
    if temp==sum:
        print("Bingo bitch!!")
    else:
        print("U get you ass kicked...")

a = int(input("Enter a number : "))
armstrong(a)