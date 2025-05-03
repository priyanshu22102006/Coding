number = eval(input("Enter a number: "))
tem = number
ans = 0
while(number>0):
    temp = number % 10
    ans = ans+temp
    number //= 10
print("Summation of digits of the number",tem,"is",ans) 