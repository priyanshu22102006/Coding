# here the add fnc is ued two times once in normal operation and other one with operator overloading
class Complex:
    def __init__(self,real,imag):    #this __init__alwa
        self.real = real
        self.imag = imag
    # def add(self,c2):
    #     new_real = c2.real + self.real
    #     new_imag = c2.imag + self.imag
    #     return Complex(new_real,new_imag)
    def __add__(self,c2):           #its actual passing __add__(c1,c2)
        new_real = c2.real + self.real
        new_imag = c2.imag + self.imag
        return Complex(new_real,new_imag)
    def print(self):
        print(self.real,"i +" ,self.imag,"j")

c1 = Complex(4,1)
c2 = Complex(8,2)

# c3 = c1.add(c2)
# c3.print()

c4 = c2 +c1
c4.print()
