# str.format() =  optional method that gives users
#                 more control when displaying output

animal = "cow"
item = "moon"

print("The "+animal+" jumped over the "+item)
print("The {} jumped over the {}".format(animal,item))
print("The {1} jumped over the {0}".format(animal,item))
print("The {ani} jumped over the {itm}".format(ani="cow",itm="moon"))
print("The {ani} jumped over the {ani}".format(ani="cow",itm="moon"))

text = "The {} jumped over the {}"
print(text.format(animal,item))

name = "Bro"

print("Hello, my name is {}".format(name))
print("Hello, my name is {:10} . Nice to meet you".format(name))   # this adds space of 10 after bro
print("Hello, my name is {:>10} . Nice to meet you".format(name))   # this adds space of 10 after bro and right shits it
print("Hello, my name is {:<10} . Nice to meet you".format(name))   # this adds space of 10 after bro and left shits it
print("Hello, my name is {:^10} . Nice to meet you".format(name))   # this adds space of 10 after bro and shits it to centre


number = 10000000.13458
num = 5616

print("The number is {:.3f}".format(number))  # this takes upto 3 digits after point
print("The number is {:,}".format(number))    # this provides with comma in million
print("The number is {:b}".format(num))       # this converts a number to binary
print("The number is {:o}".format(num))       # this converts a number to octahedral
print("The number is {:X}".format(num))       # this converts a number to hexadecimal
print("The number is {:E}".format(num))       # this converts a number to scientific way  