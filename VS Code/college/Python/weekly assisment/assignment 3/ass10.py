num = int(input("Enter a desired limit:"))
pos = 0
neg = 0
z = 0
for i in range(1,num+1):
    n = int(input())
    if n>0:
        pos+=1
    elif n<0:
        neg+=1
    else:
        z+=1
print("total positive number entered :",pos)
print("total negtive number entered :",neg)
print("total zero number entered :",z)