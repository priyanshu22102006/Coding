number1 = eval(input("Enter num1 :"))
number2 = eval(input("Enter num2 :"))


operation = input("Enter any desired arithmetic operation")

if operation == "+":
    print(number1+number2)
elif operation == "-":
    if number1>number2:
        print(number1-number2)
    else:
        print(number2-number1)
elif operation == "*":
    print(number1*number2)
elif operation == "/":
    print(number1/number2)
elif operation == "%":
    print(number1%number2)
elif operation == "**":
    print(number1**number2)
elif operation == "//":
    print(number1//number2)
else :
    print("Please enter a valid input ")