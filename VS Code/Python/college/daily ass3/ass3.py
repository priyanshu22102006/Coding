number = eval(input("Enter 1st number : "))
number1 = eval(input("Enter 2nd number : "))
number2 = eval(input("Enter 3rd number : "))

if number<number1 and number<number2:
    print("The smallest number is :"+str(number))
elif number1<number and number1<number2:
    print("The smallest number is :"+str(number1))
else :
    print("The smallest number is :"+str(number2))