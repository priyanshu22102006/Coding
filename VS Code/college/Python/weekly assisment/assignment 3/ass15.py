import math
x = int(input("Enter degree: "))
n = int(input("Enter the last no of series: "))
sum = 0
pow = 0
x = math.radians(x)

for i in range(0,n):
    fact = 1
    a = pow
    while a>1:
        fact*=a
        a-=1
    sum += (x**(pow)/fact)*(-1)**i
    pow+=2
print(sum)