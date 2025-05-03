n = int(input())
temp = "1"
for i in range(1,n+1):
    print((" "*(n-i) + (temp*i)))
    tempo=int(temp)+1
    temp=str(tempo)
tempo = str(n - 1) #4
for j in range(1,n):
    print((" "*j)+(tempo*(n-j)))
    b = int(tempo)-1
    tempo = str(b)