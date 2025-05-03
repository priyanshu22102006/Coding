calls = int(input("Enter total no of calls : "))

bill = 0
if calls <= 100 :
    bill = 200
    print(bill)
elif calls <= 150 :
    bill = 200 + (0.60*(150 - calls)) 
    print(bill)
elif 150 < calls <= 200 :
    bill = 200 + (0.50*(150 - calls)) 
    print(bill)
elif calls > 200 :
    bill = 200 + (0.40*(calls - 200)) 
    print(bill)