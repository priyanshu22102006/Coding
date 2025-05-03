import time
#if else loop
age = int(input("How old are u? :"))

if age >= 100:
    print("Your are a century old")
elif 24>= age >= 18:
    print("Your are a teenager ")
elif age>24:
    print("Your are a adult ")
elif age<0:
    print("You haven't born yet")
else:
    print("You are a child")

#while loop: it executs a block of code for unlimited times 

name = ''

while len(name)==0:
    name = input('Enter your name: ')

print('Hello '+name)

#for loop: it executes a block of code for limited no of times

for i in range(10):
    print(i+1)

for i in range(50,100+1,2):    #[start,stop,step] always rememberstart is inclusive but stop is exclusive
    print(i)

#for seconds in range(10,0,-1):
#   print(seconds)
 #   time.sleep(1) #this allows to take time while printing
#print('Happy New Year')

# nested loops

row =int(input('How many rows you want? :'))
column = int(input('How many columns you want? :'))
symbol = (input('What symbol you want? :'))

for i in range(row):
    for j in range(column):
        print(symbol, end='')
    print()

#Loop control statement
#break:used to terminate the loop entirely
#continue: skips to then nxt itration f the loop
#pass: does nothing acts as a placeholder

while True:
    nam = input('Enter your name :')
    if nam!="":
        break

phone_number = "62-90-467-393"

for i in phone_number:
    if i == '-':
        continue
    print(i, end='') #this end='' helps us to print in a go by not moving to the nxt line
print()

for i in range(1,21):
    if i==13:
        pass
    else:
        print(i)
