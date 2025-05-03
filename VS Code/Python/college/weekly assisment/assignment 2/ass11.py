number = eval(input("Enter a number : "))

ans = 0
while number>0:
    last = number%10
    number //=10
    ans = (ans*10) + last
print(ans)