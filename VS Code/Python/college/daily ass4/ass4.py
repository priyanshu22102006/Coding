number = input("Enter any float number :")
b = ""
for i in number:
    if(i == "."):
        b = b + "1."
    else:
        b+=i
print(b)