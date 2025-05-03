weight = eval(input("Enter your weight(in kilograms) : "))
height = eval(input("Enter your height(in meters) : "))

bmi = weight/(height**2)
if bmi<18.5:
    print("Underweight")
elif 18.5<=bmi and bmi<=24.9:
    print("Normal Weight")
elif 25<=bmi and bmi<=29.9:
    print("Overweight")
elif bmi>=30:
    print("Underweight")