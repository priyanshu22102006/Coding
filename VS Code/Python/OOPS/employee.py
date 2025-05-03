class Employee:
    def __init__(self,role,department,salary):
        self.role = role
        self.department = department
        self.salary = salary
    def showDetails(self):
        print(self.role)
        print(self.department)
        print(self.salary)
class Engineer(Employee):
    def __init__(self,name,age):
        self.name = name
        self.age = age
        super().__init__("Professor", "CSIT ", 52400)     #we can declare in both ways either
# Emp1 = Employee("Professor", "CSIT ", 52400)            #we can declare in both ways either
eng = Engineer("Dr. Subhramanium Saha",45)
eng.showDetails()