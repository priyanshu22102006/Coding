class Student:
    def __init__(self,phy,chem,math):
        self.physics = phy
        self.chemistry = chem
        self.maths = math

    @property     #this allows us to change the value anytime and provides the result accprding to it
    def percentage(self):
        return str((self.physics+self.chemistry+self.maths)/3) + "%"

std1 = Student(98,100,86)
print(std1.percentage)

std1.chemistry = 8
print(std1.percentage)