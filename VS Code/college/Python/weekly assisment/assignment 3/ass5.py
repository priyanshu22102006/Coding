num = int(input("Enter nth number :"))
for i in range(1,num+1):
    sum = 1 
    if i>1:
        fact = i
        while fact>1:
            sum*=fact
            fact-=1
        print(sum)
    else:print(sum)