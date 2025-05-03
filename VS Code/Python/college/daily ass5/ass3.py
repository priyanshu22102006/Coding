marks = eval(input("Enter the marks of the student :"))

if marks >= 90:
    print("Your are awarded E grade")
elif 80 <= marks <=89:
    print("Your are awarded A grade")
elif 70 <= marks <=79:
    print("Your are awarded B grade")
elif 60 <= marks <=69:
    print("Your are awarded C grade")
elif 50 <= marks <=59:
    print("Your are awarded D grade")
elif 35 <= marks <=49:
    print("Your are awarded P grade")
elif marks < 35:
    print("Your are awarded F grade")