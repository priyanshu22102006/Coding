num = int(input("Enter a number :"))

sum = 0 
nume = 1 #1
deno = 2  #2
for i in range(1,num+1):
    temp = nume/deno
    sum = sum + temp
    nume+=1
    deno+=1
print(sum)