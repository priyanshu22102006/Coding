def power(x,y):
    if y==0:
        return 1
    elif y==1:
        return 2
    else:
        return (x*power(x,y-1))

num1 = int(input("Enter the base: "))
num2 = int(input("Enter the power: "))
print(power(num1,num2))