num = eval(input("Enter a number :"))  #238
last2 = num % 100 #38
num//=100 #2
last=last2%10 #8
sec_last = last2//10 #3
sec_last *=2
final = (num*(100)) + (sec_last*(10)) + (last)
print(final)