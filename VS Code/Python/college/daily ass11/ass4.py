a = input()
a_copy = a.lower()
count = 0
for i in a_copy:
    if i=="a"or i=="e"or i=="i"or i=="o"or i=="u":
        count+=1
print(count)