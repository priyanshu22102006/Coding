num = int(input("Enter a number : "))
a =[]
temp = str(num)
for i in range(0,len(temp)):
    a.append(num%10)
    num//=10
print(a)
tempo = a.copy()
if tempo[::-1]==a:
    print("bingo")
else:
    print("nxt plz")