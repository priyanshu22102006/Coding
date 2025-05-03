sidea = eval(input("Enter side a of triangle : "))
sideb = eval(input("Enter side b of triangle : "))
sidec = eval(input("Enter side c of triangle : "))

s = sidea + sideb + sidec
area_tri = (s * (s - sidea) * (s - sideb) * (s - sidec))**0.5

print("Perimeter of triangle is :" + str(s))
print("Area of triangle is :" + str(area_tri))

length = eval(input("Enter length of rectangle : "))
breadth = eval(input("Enter breadth of rectangle : "))

peri = (length + breadth) * 2
area = length*breadth

print("Perimeter of rectangle is :" + str(peri))
print("Area of rectangle is :" + str(area))

radius = eval(input("Enter radius of a circle : "))

pi = 3.1415
peri_c = 2 * pi * radius
area_c = pi * radius**2

print("Perimeter of circle is :" + str(peri_c))
print("Area of circle is :" + str(area_c))