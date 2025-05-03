year = int(input("Enter a year : "))

if (year%4==0 and (year%400==0 or year%100!=0)):
    print("THE YEAR IS LEAP YEAR.")
else:
    print("the year is not a leap year.")