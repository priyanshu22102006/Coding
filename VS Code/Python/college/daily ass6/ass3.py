print("Enter the coordinats of the point (a,b):")
print("Enter the equation of line cx+dy+e = 0 ")
a = eval(input("Enter a :"))
b = eval(input("Enter b :"))
c = eval(input("Enter c :"))
d = eval(input("Enter d :"))
e = eval(input("Enter e :"))

ans = (a*c+b*d+e)/(c**2 + d**2)**0.5

print(ans)