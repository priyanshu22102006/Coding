number = eval(input("Enter a number: "))
tem = number
ans = 0
while(number>0):
    temp = number % 10
    ans = ans*10+temp
    number //= 10
if tem == ans:
    print("The number",tem,"is palindrome.")
else:
    print("The number",tem,"is not palindrome.")