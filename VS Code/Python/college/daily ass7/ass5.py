number = int(input("Enter number whose factorial is requied :"))

fact = 1
if number==0:
    print("Factorial is 0")
else:
    while number>0:
        fact = fact * number
        number -= 1
    print(fact)
