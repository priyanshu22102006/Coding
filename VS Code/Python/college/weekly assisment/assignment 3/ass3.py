num = int(input("Enter nth number :"))
temp = 0
count = 1
for i in range(1,num+1):
    print(count,end=" ")  #1
    temp+=2     #temp = 0 -> 2
    count+=temp #count =1 -> 3(1+2)
   