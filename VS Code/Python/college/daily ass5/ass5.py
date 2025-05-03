print("The equation of circle id x^2 + y^2 + 2ax + 2by + c = 0 ")
a = eval(input("Enter coefficient of x: "))
b = eval(input("Enter coefficient of y: "))
c = eval(input("Enter constant c: "))

x,y = -a,-b
radius = (a**2 + b**2 - c)**0.5

print("Centre =("+str(x)+","+str(y)+")" )
print("Radius of the circle :",radius)