class cars:
    def __init__(self,fullname):
        print('Adding a student')
        self.name = fullname
str = input()
c1 = cars(str)
print(c1.name)