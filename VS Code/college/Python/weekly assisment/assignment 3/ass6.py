num = int(input("Enter nth number :"))
if num>0:
    sum = 0
    for i in range(1,num+1):
        sum+=(1/i)
    print(sum)
else:print("Enter only positive number:")