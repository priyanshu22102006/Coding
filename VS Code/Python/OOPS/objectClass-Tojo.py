class cars:
    design = "classic"
    colour = "black"
    def __init__(self,type):
         self.type = type
    @staticmethod
    def start() :
        print("Engine started...")
    @staticmethod
    def stop() :
        print("Engine stopped...")   

class Maruit_suzuki(cars):    # inheritance... putting the qualities of car in maruti
       def __init__(self,name,type):
            super().__init__(type)    # if we comment out this then c1.type will face error as init is a privte function
            self.name = name
            # super().start()           # it will call the start at the begening

c1 = Maruit_suzuki("Maruti","Alto 800")        # object

print(c1.name)
print(c1.design)
print(c1.type)
c1.start()
