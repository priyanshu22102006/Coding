number = eval(input("Enter a number: "))
ans = 0
while(number>0):
    temp = number % 10
    ans = ans*10+temp
    number //= 10
print("The reversed number is",ans) 