def fact(x):
    sum=1
    while(x>=1):
        sum*=(x)
        x-=1
    return sum
num = int(input())
print(fact(num))