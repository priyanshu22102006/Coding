a = eval(input("Enter coefficient of x :"))
b = eval(input("Enter coefficient of y :"))
c = eval(input("Enter constant :"))

det = (b**2 - (4*a*c))**0.5
root1 = (-b + det)/(2*a)
root2 = (-b - det)/(2*a)

print("Roots of the equation are ",root1," and ",root2)