n = int(input("Enter nth number: "))
temp,tempo,j= 3,1,5
for i in range(1,n+1):
    if i==1:
        print(0,end=" ")
    else:
        print(str(temp)+"/"+str(tempo),end = " ")
        temp+=j
        tempo +=2
        j+=2