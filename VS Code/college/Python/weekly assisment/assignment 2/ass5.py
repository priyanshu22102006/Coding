number = int(input("Enter a number :"))

a=0
b=0
for i in range(1,number+1):
    if number%i==0:
        print(i)