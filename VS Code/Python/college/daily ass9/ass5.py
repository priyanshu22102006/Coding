num = int(input("Enter a number :"))

sum = 0 
nume = 1 #1
deno = 3  #2
for i in range(1,num+1):
    temp = nume/deno
    sum = sum + temp
    nume+=2
    deno+=2
print(sum)