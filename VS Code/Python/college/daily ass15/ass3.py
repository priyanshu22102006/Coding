# 3. 1 1 2 5 14 42 132 429 1430 4862…..(Catalan Numbers Series)
def fact(nu):
    if nu==1:
        return 1
    return nu*fact(nu-1)

n = int(input("Enter nth term : "))

for i in range(1,n+1):
    temp = (fact(2*i)//((fact(i+1)*fact(i))))
    print(temp,end=" ")