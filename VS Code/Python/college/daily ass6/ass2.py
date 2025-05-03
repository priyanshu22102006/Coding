import math
a = eval(input("Enter side a of triangle : "))
b = eval(input("Enter side b of triangle : "))
c = eval(input("Enter side c of triangle : "))

cosA = (((b**2) + (c**2) - (a**2))/(2*b*c))
A = math.acos(cosA)
value = math.degrees(A)
print(value)