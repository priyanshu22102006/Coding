# class cars:
#     def __init__(self,fullname):
#         print('Adding a student')
#         self.name = fullname
# str = input()
# c1 = cars(str)
# print(c1.name)

# class Student:
#     def __init__(self,name,marks1,marks2,marks3):
#         self.name = name
#         self.marks1 = marks1
#         self.marks2 = marks2
#         self.marks3 = marks3
#     def Average(self):
#         avg = (self.marks1+self.marks2+self.marks3)/3
#         return avg
# s1 = Student("Priyanshu",95,98,96)
# print(s1.Average())

class Student:
    college_name = "ABCD College"
    def __init__(self,name,marks,student_id,password):
        self.name = name
        self.marks = marks
        self.student_id = student_id
#       self.password = password   
        self.__password = password   #just by adding "__" before password thi attribute becomes private  
    def greeting(self):                #this is declared within the object attribute
        print("welcome",self.name)

    # @classmethod                    #this is declared within the class attribute   
    def Private(self):
        return self.__password 
s1 = Student("Priyanshu",[95,98,96],"priya.154","priyanshu@2006")
# s1.college()
s1.greeting()
print(s1.college_name)

# use of del keyword

# print(s1.name)
# del s1.name
# print(s1.name)
