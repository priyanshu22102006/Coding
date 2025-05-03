def factorial(a):
    if a==1:
        return a
    else:
        return (a*factorial(a-1))

def peterson(a):
    if (a>=1 and a<=9):
        return factorial(a)
    else:
        temp = a%10
        a //= 10
        return factorial(temp) + peterson(a)   #fact(3)   pert(15)

num = int(input("Enter a number : "))
if (num == peterson(num)):
    print("Bingo")
else:
    print("Freaks") 