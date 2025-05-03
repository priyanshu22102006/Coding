num = eval(input("Enter a number :"))
#23617
last3 = num%1000 #617
num = num // 1000  #23
rev = 0
while last3!=0:
   last=last3%10 #7
   rev = rev*10 + last #7
   last3//=10 #61
# finally rev = 716
final = (num*1000) +(rev)
print(final)

