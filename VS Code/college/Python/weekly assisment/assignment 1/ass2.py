principle = eval(input("Enter principle amount : "))
rate = eval(input("Enter rate of intrest : "))
time = eval(input("Enter time of the amount : "))

si = (principle*rate*time) / 100

print("Simple Intrest for the amount "+str(principle)+" at a rate of "+str(rate)+" for "+ str(time)+" years is : "+str(si))
