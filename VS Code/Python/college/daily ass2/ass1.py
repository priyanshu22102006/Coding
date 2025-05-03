# 1. Write a Python program, which reads a, b and c as sides of a triangle and
# prints area. Hint: area = (s *(s  a) *(s  b) *(s  c))^(1/2). [Hint: s is (a+b+c)/2]. If
# input 5,7,10 then output 16.24. 

a = eval(input("Enter side a : "))
b = eval(input("Enter side b : "))
c = eval(input("Enter side c : "))

s = (a+b+c)/2
A = (s-a)
B = (s-b)
C = (s-c)
area = (s*A*B*C)**0.5

print("Area of triangle : "+ str(area))