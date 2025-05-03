# 3. Write a Python program that prompts the user to input principle, rate, and
# time and calculate compound interest. 

principle = eval(input("Enter principle amount : "))
rate = eval(input("Enter rate of intrest : "))
time = eval(input("Enter time of the amount : "))
period = eval(input("Enter the no of intervals : "))

ci = principle * ((1+((rate)/(period*100)))**(period*time)-1)
amt = ci + principle
print("Compound Intrest for the amount "+str(principle)+" at a rate of "+str(rate)+" for "+ str(time)+" years is : "+str(ci))
print("Total amt : " + str(amt))