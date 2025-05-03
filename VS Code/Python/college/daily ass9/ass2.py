num = int(input("Enter a number :"))

sum = 0 
for i in range(1,num+1):
    sum = sum + i*(-1)**(i+1)
print(sum)