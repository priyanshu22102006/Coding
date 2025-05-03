n = int(input("Enter nth number: "))
for i in range(1,n+1):
    print( i * ( (i//2) + ((i%2) * 2) + i ),end=" ")