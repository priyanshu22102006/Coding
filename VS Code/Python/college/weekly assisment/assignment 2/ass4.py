first = 0
second = 1

number = int(input("Enter ending point of fibonacci number :"))
if number == 0:
    print(first,end=" ")
elif number == 1:
    print(first,second,end=" ")
else:
    print("0",end= " ")
    for i in range(2,number+1): 
        sum=first+second
        first = second
        second = sum
        print(first,end=" ")
        