# 2. Write a Python program that accepts principle, rate and time from the
# user and print the simple interest. 

principle = eval(input("Enter principle amount : "))
rate = eval(input("Enter rate of intrest : "))
time = eval(input("Enter time of the amount : "))

si = (principle*rate*time) / 100
amt = principle + si

print("Simple Intrest for the amount "+str(principle)+" at a rate of "+str(rate)+" for "+ str(time)+" years is : "+str(si))
print(amt)