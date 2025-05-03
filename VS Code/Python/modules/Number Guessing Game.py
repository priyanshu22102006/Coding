import random

lowst_no = 1
highst_no = 50
answer = random.randint(lowst_no, highst_no)
guesses = 0
is_running = True

while is_running:

    print("----------------------------")
    print("        Welcome to          ")
    print("Python Number Guessing Game")

    while True:
        
        guess = input("Enter your guess between 1 to 50:")

        if guess.isdigit():

            guess = int(guess)
            guesses += 1
            
            if guess > answer:
                print("Little lower")
                
            elif guess < answer:
                print("Little higher")

            else:
                print("----------------------------")
                print("You got it!!")
                print(f"The correct answer was {answer}")
                print(f"You took {guesses} guesses")
                break
        else:
            print("Please enter your guess between 1 to 50")

    if not input("Do you want to play again? (y/n): ").lower() == "y":
            break