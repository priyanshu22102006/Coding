num = int(input("Enter nth number : "))
count = 0
print("Factors of",num,"are :",end=" ")
for i in range(1,num+1):
    if num%i==0:
        count+=i
        print(i,end=" ")
        i+=1
print("\nSum of the factors of",num,"is:",count)