import math
def peterson(x):
    temp = x
    sum = 0
    for _ in range(len(str(x))):
        sum+=math.factorial(x%10)
        x//=10
    if temp==sum:
        print("Bingo U mother fucker....")
    else:
        print("U sucks too much")

num = int(input("Enter a number : "))
peterson(num)