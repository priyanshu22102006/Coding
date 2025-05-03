import math
print("sin(x)")
x = math.radians(eval(input("Enter the value of x :")))
n = int(input("Enter no of series :"))

sum = 0
temp = 1
for i in range(1,n+1):
    tempo = temp  #1
    fact = 1
    while tempo>1:
        fact *= tempo
        tempo-=1   #fact 1 
    sum += (( x**temp) / (fact)) * (-1)**(i+1)
    temp+=2
print(sum)