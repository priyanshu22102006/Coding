import random

x = random.randint(1,6)  # this will chose any number betwen 1 to 6 for me
y = random.random()
mylist = ["rock","paper","scissors"]
z = random.choice(mylist)
cards = [1,2,3,4,5,6,7,8,9,"k","j","q","a"]
random.shuffle(cards)

print(cards)
print(x)
print(y)