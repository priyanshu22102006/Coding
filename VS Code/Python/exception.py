# exception =  events dedicated during execution that interruptthe flow of a program

#numerator=int(input("Enter a number :"))
#denominator=int(input("Enter a number :"))
#result = numerator/denominator

try:       # this method helps us to avoid facing erros  
    numerator=int(input("Enter a number :"))
    denominator=int(input("Enter a number :"))
    result = numerator/denominator
except ZeroDivisionError as e:  # this as e helps to identif our error
    print(e)
    print("You can't divide by zero !")
except ValueError : #if the ValueError occurs it will print the text below 
    print("Enter only number plz")
except Exception as e:
    print("Someting went wrong")
else:
    print(result)
finally:   # this will continue to show for any kind if operation
    print ("good job")
