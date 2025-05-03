def hello(first_name,last_name,age):
    print("hello " + first_name +" "+ last_name)
    print("Your age is "+str(age))
    print("Have a nice day")

def multiply(num1,num2):
    result = num1*num2 
    return result

x = multiply(6,6)
print(x)
hello("Bro","Code",21)

#function nested calls

num = input("Enter a number : ")
num = float(num)
num = abs(num)
num = round(num)
#one can do by the above method or else follow the method below
num1 = round(abs(float(input("Enter a number : "))))
print(num)
print(num)