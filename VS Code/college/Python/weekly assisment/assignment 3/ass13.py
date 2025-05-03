num = int(input("Enter nth term : "))
sum = 0
for i in range(1,num+1):
    sum += ((-1)**(i-1))/i
print(sum)