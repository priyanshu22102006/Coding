print("Let two equations of st line are ")
print("ax + by + c = 0 and px + qy + r = 0")
a1= eval(input())
b1= eval(input())
c1= eval(input())
a2= eval(input())
b2= eval(input())
c2= eval(input())

x = (((b1*c1) - (b2*c2))/((a1*b2) - (a2*b1)))
y = (((a2*c1) - (a1*c2))/((a1*b2) - (a2*b1)))

print("(",x,",",y,")")