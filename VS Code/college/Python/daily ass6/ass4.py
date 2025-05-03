import math
a = eval(input("Enter coefficient of x :"))
b = eval(input("Enter coefficient of y :"))
c = eval(input("Enter coefficient of constant part :"))

determinant = (b**2 - (4*a*c))

if determinant > 0:
    root1 = (-b + determinant**0.5)/(2*a)
    root2 = (-b - determinant**0.5)/(2*a)
    print("Roots of the equation are ",root1," and ",root2)
elif determinant == 0:
    root = -b / (2 * a)
    print("Root of the equation is",root)
else:
    real = -b/(2*a)
    imaginary = (-determinant**0.5) / (2*a)
    root1 = complex(real,imaginary)
    root2 = complex(real,imaginary)
    print("Roots of the equation are ",root1," and ",root2)