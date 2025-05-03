class Circle:
    def __init__(self, radius):
        self.radius = radius
    def area(self):
        area = (22*self.radius**2)/7
        print("Area of the Circle: ",area)
    def perimeter(self):
        peri = (2*22*self.radius)/7
        print("Perimeter of the Circle: ",peri)

radius = int(input("Enter radius of the Circle: "))
c1 = Circle(radius)
c1.perimeter()
c1.area()
