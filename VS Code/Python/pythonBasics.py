print("Hello world")
print("I am the owner of my own world")
#in python is does not mattes whether you use "" or ''
#during printing if the variable name is kept with in quote then the variable name gonna be printed only not that what stored in that variable 
name = "bro"
print(name)
print('name')
print("hello "+name) #here these two gets added as they are of same datatype...
#to check datatype of any variable declared write the following
print(type(name)) 
first_name = 'Priyanshu'
middle_name = 'Chandra'
last_name = 'Sarker'
full_name =first_name+' '+middle_name+' '+last_name
print(full_name)

#intigers didnot need to be kept in quote..
age = 21
age += 1
print(age)
print(type(age))
# print("Your age is : "+age) this will give error as we are trying to intrigate integer and string which will cause error
# in order to recover fron this we use typecasting
print("Your age is : "+str(age)) 

#float
height = 250.96
print(height)
print(type(height))

#boolean
human = True
print(human)
print(type(human))

#to print easily..
name , age , attractive = "bro" , 17 , True
print(name)
print(attractive)
print(age)

#supose the variavles have the same value then...
spongeboob = patrick = sandy = squireldark = 30
print(spongeboob)
print(patrick)
print(sandy)
print(squireldark)

#some useful short cuts...
nam = "priyanshu"
nm1 = "PRIYANSHU"
num =12321
print(len(nam))
print(nam.find('u'))  #this gives us the index of the word in the string
print(nam.capitalize())#this can upper case only the 1st words 1st letter if there is another word then no change
print(nam.upper()) #upper case all the letters
print(nm1.lower())#lower case all the letters
print(nam.isdigit())#this is a bool function when there is number then its true  other wise false
print(nam.isalpha())
print(nam.count('u'))
#print(nam.replace(("u","i")))
print(nam*3)

#how to take input form user
namee = input("What is your name? ")
agee = int(input("Enter your age : ")) #since we are taking input as string so we need to convert to integer by typecasting
height = float(input("Enter your height :"))#since height can be in point so float is used

print("Your name is : "+namee)# since in string we can only add variables of same data type so type casted
print("Your age is : "+str(agee))
print("Your height is : "+str(height))