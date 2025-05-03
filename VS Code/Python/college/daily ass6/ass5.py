print("Let ax+by+c = 0 an equation of straight line")
a = eval(input("Enter value of a: "))
b = eval(input("Enter value of b: "))
c = eval(input("Enter value of c: "))

slope = -(a/b)

print("Slope of the equation ",slope)
if slope>0:
    print("positive slope")
elif slope<0:
    print("negative slope")
else:
    print("slope is vertical")
