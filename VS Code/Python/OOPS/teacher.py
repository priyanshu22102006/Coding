class Teacher:
    def __init__(self,name,age,dept,subject,salary):
        self.name = name
        self.age = age
        self.dept = dept
        self.subject = subject
        self.__salary = salary
    def change_name(self,new_name):
        print(f"The name has been ubdated to {new_name} from {self.name}")
        self.name = new_name
    def change_department(self,new_department):
        self.dept = new_department
        print(f"The department has been updated to {new_department}")
    def show_salary(self):
        return f"{self.name}'s salary is {self.__salary}"

t1 = Teacher("Priyanshu Chandra Sarker", 18, "CSE", "Programming Language", 70000)
print(t1.age)
print(t1.dept)
print(t1.name)
print(t1.show_salary())
# t1.change_name("Anushmita Sarker")
t1.change_department("AI-ML")