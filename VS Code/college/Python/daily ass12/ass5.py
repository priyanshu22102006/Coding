string = input("")
count = 0
for i in string:
    if i == " ":
        count+=1
    else:
        continue
print("No of words =",count+1)