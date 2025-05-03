# private and public attributes:

# public: the infromations which we get easily by just calling an attribute
# private: the infromaion which cant be get easily by just calling an attribute
#          typically an attribute is made private by using two simultaneous underscores
#          eg: self.__name
#          point to remember:: a ptivate attribute or member can access private attributes without error

class Student:
    def __init__(self,name,marks,student_id,password):
        self.name = name
        self.marks = marks
        self.student_id = student_id
        # self.password = password   
        self.__password = password     #just by adding "__" before password thi attribute becomes private  
    def greeting(self):                #this is declared within the object attribute
        print("welcome",self.name)

    @staticmethod                      #this is declared within the class attribute here self is not required     
    def college():
        print("ABC College")
    def Private(self):                 #by this it is proved that private can be accessed within class only not outside
        return self.__password 

s1 = Student("Priyanshu",[95,98,96],"priya.154","priyanshu@2006")

s1.college()
print(s1.name)
print(s1.Private())
print(s1.__password)
