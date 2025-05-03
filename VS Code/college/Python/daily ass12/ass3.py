char = input("Enter a charcter: ")
if len(char)==1:
    char = char.lower()
    if char =="a"or char =="e"or char =="i"or char =="o"or char =="u":
        print("vowel")
    else:
        print("consonats")
else:
    print("Please enter a single character..")