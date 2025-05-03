num1,num2= eval(input("Enter starting range of number : ")),eval(input("Enter ending range of number : "))
if num1>0 and num2>0:
    for i in range(num1,num2+1):
        for j in (2,i):
            if i%j==0:
                break
            else:
                print(i)
else:
    print("Please enter positive range...")