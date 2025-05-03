n = int(input("Enter nth number: "))
sum , temp , i = 9 , 14 , 1
while i<=n:
    print(sum,end=" ")
    sum+=temp
    temp+=8
    i+=1