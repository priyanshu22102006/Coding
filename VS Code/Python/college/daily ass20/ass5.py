num = int(input("Enter nth number : "))
temp = 3
start = -1
for i in range(1,num+1):
    print(start,end=" ")
    start+=temp
    temp+=6
