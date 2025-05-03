import random

options = ("rock","paper","scissors")

person = None
computer = random.choice(options)
uscore = 0
cscore = 0
playing = True

while playing:
    print("----------------------------")
    print("        Welcome to          ")
    print("Python Rock Paper Scissors Game")
    while True:
        person = input("Enter your choise: ").lower()
        if person == computer:
            print("Tie")
            print("No Points")
            break       
        elif person == "rock" and computer == "scissors":
            print("You Won!")
            uscore += 1
        elif person == "paper" and computer == "rock":
            print("You Won!")
            uscore += 1
        elif person == "scissors" and computer == "paper":
            print("You Won!")
            uscore += 1
        else:
            print("Computer Won!")
            cscore += 1
    print("----------------------------")
    print("       FINAL RESULTS!       ")  
    if cscore>uscore:
        print(f"Computer Rocks! {cscore}")
    else:
        print(f"You Rocks! {uscore}")
    if not input("Do you want to play again? (y/n): ").lower() == 'y' :
        break