#list : lists in python are like arrays in c++

food = ["pizza","sondesh","chana batora","chili chicken"]

for x in food:
    print(x)

food[0] = "ilish mach"

print()

for x in food:
    print(x)

#food.reverse()
food.append("chicken biriyani")  #this adds element to the last position of the list 
food.remove("sondesh")
food.pop()                       #this removes element from the last position
food.insert(0,"mutton biriyani")
food.sort()
food.clear()

for x in food:
    print(x)

#2D list: its equivalent to a 2D Array

breakfast =["bread","tea","jam"]
lunch =["rice","fish","panner"]
desert =["rasgulls","gulab jamun","ice cream"]

foood = [breakfast,lunch,desert]

print(foood)
print(foood[1])
print(foood[1][2])

#tuple: collection which is ordered and unchangable 
#       used to group together related data

student =("Bro",18,"male")

print(student.count("Bro"))  #this ia used to count how many times the word bro appeared in the tupple
print(student.index("male"))
 
for x in student:
    print(x)

if "Bro" in student:
    print("Bro is here:")

#set = collection which is unordered, unindexedd . no deuplication

utensils = {"fork","spoon","knife"}
dishes = {"bowl","plate","cup","knife"}

utensils.add("napkin")
utensils.remove("fork")
utensils.update(dishes)
dinner_table = utensils.union(dishes)
utensils.clear()
#for x in dinner_table:
#    print(x)

print(dishes.difference(utensils))


# *args = parameter that will pack all the arguments into a tuple
#         useful so that a function can accept a varying amount of arguments 

def add(num1 ,num2):
    sum = 0
    sum = num1 + num2
    return sum

def add1(*arg):
    sum = 0 
    #for doing any chnges in agr or a tuple we need to typecast it to list...
    arg = list(arg)
    arg [0] = 0
    for x in arg:
        sum+=x
    return sum

#print(add(1.3,4,3))
print(add1(1,9,6,5))


# **kwargs = parameter that will pack all arguments into dictionary 
#            useful so that a function can accept a varying amt of keyword argument

def hello(**kwargs):
    print("Hello",end=" ")
    for key,value in kwargs.items(): #  this key,value
        print(value, end=" ")
    print()

hello(title="Mr.",first="Bro",middle="Dude",last="Code")

# list comprehension

# list = [expression for variable in iterable]

doubles = [x*2 for x in range(1,11)]
triples = [x*3 for x in range(1,11)]
square = [x**2 for x in range(1,11)]
print(doubles)
print(triples)
print(square)

fruits = ["apple", "orange", "banana", "mango", "lichi"]
fruits = [fruit.upper() for fruit in fruits]
print(fruits)

numbers = [-1,1,3,-5,-10,6,-100,9,-30]
positive_num = [number for number in numbers if number>=0]
negative_num = [number for number in numbers if number<0]
print(positive_num)
print(negative_num)