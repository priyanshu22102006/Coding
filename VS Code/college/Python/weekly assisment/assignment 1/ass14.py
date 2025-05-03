age = eval(input("Enter your age :"))

if 0<=age and age<=12:
    print("Child")
elif 13<=age and age<=19:
    print("Teenager")
elif 20<=age and age<=59:
    print("Adult")
elif 60<=age :
    print("Senior Citizen")
