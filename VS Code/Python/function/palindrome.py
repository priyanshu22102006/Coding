# Palindrome 1234321
def palindrome(x):
    temp = str(x)
    a = int(temp[::-1])
    if a==x:
        print("Bingo man..!!")
    else:
        print("U screwed.....")
        
n = int(input("Enter any random number: "))
palindrome(n)