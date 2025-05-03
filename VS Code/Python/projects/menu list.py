menu = {"chips" :30,
        "fernch fires" :50,
        "mayonese" :10,
        "nachoes" :10,
        "creampie" :60}
cart = []
total = 0
print("---------MENU-----------")
for key, value in menu.items():
    print(f"{key:20}:₹{value}")
    print("------------------------")

print("type Exit to quit")
while True:
    food = input("Enter food items : ").lower()
    if food == "exit":
        break
    elif menu.get(food) is not None:
        cart.append(food)
print()
print("--------YOUR ORDER--------")
for food in cart:
    total += menu.get(food)
    print(food,end=" ")
print()
print(f"Total: ₹{total:.2f}")