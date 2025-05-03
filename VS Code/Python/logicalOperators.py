#logical operators(and,or,not)

temp = float(input('What is the temperature outside : '))

if temp >= 0 and temp <= 30:  #if any one condition is false then whole becones false
    print('The weather outside is good today ')
    print('You may rome outside')
elif temp<0 or 60>temp>30:       #if any of the conditon is true then whole becomes true
    print('Temperature outside is bad')
    print('It is recomended to stay inside')
elif not(temp<60):         #not transforms true to false and false to true
    print('Outside is too hot..')
    print('It gonna boil you')