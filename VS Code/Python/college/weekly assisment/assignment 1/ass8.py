print("Enter 5 numbers to find out its mean and standard deviation :")
a,b,c,d,e = eval(input()),eval(input()),eval(input()),eval(input()),eval(input())

mean = (a+b+c+d+e)/5
sd = (((mean-a)**2 + (mean-b)**2 + (mean-c)**2 + (mean-d)**2 + (mean-e)**2 ) / (mean-1) )**0.5

print("Mean ",mean," standard deviation ",sd)