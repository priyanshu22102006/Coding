class person:
    
    name = "homo Sapians"

    def changename(self, name):
        self.name = name       # ei tate classer name ta update hoy na....rather object er nametai sudhu change hoy 
        # person.name = name     # eita classer name o chnge kore dai

        #OR

    @classmethod           # by using this we have direct access to the class attributes 
    def changename(cls,name):
        cls.name=name       

    @staticmethod           # by using it we dont need to mention self
    def location():
        print("Kolkata, India")

p1 = person()
p1.changename("Priyanshu")
print(person.name)          # this is class attribute
print(p1.name)              # this is object attribute
p1.location()
