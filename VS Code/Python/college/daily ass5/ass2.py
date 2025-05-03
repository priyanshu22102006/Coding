a = eval(input("Enter side a of triangle:"))
b = eval(input("Enter side b of triangle:"))
c = eval(input("Enter side c of triangle:"))

if a**2 == b**2 + c**2:
    print("The triangle is a right angled triangle")
else:
    print("The triangle is not a right angled triangle")
