name = input()
var = input("Which part do you want : ")
idx = name.find(var)
if idx>=0:
    print("The substring",var,"found at",idx,"index.")
else:
    print("The substring",var,"not found.")