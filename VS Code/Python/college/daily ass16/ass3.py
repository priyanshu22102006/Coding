n = int(input("Enter nth number: "))

tamp = 1
a = 2
count = 0
for i in range(1,n+1):
    print(tamp)
    tamp = tamp + (4*a)
    count+=1
    if count%2==0:
        a+=2
    