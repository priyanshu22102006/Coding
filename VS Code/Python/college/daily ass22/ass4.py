num = int(input("Enter nth no : "))
for i in range(num,0,-1):
    temp = i
    while(temp>0):
        print(temp,end="")
        temp-=1
    print()
count = 0
for k in range(1,num):
    b = 2 + count
    for l in range(0,k+1):
        print(b,end="")
        b-=1
    count+=1
    print()