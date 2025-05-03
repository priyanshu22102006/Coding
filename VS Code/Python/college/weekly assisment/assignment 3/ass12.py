num = int(input("Enter nth term : "))

sum = 0
for i in range(1,num+1):
    fact = 1
    a = i
    while a>1:
        fact *= a
        a -= 1 
    sum = sum + (i/fact)
print(sum)