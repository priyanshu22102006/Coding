base = int(input("Enter base number :"))
exp = int(input("Enter exponent number :"))
sum = 1
for i in range(1,exp+1):
    sum *= base
print(sum)