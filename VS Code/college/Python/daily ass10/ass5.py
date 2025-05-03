a = input()
count = 0
for i in a:
    if i == " ":
        continue
    else:
        count+=1
print(count)
print(len(a))