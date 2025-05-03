def fact(numb):
    if numb == 1:
        return numb
    else:
        factori = 0
        return numb * fact(numb-1)

numb = int(input("Enter a number :"))
print(fact(numb))
