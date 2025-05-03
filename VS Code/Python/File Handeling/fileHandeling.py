import os

# file detection: Check whether a given file is available or not..

path = "test.txt"

if os.path.exists(path):
    print("That location exists")
    if os.path.isdir(path):
        print("That is a directory")
    elif os.path.isfile(path):
        print("That is a file")
else:
    print("The location doesnt exists:")

# file reading

with open("test.txt") as file:
    print(file.read())
print(file.closed) # as we are using with syntax this automatically opens and closes the file

try: 
    with open("test.tx") as file:
        print(file.read())
except FileNotFoundError :
    print("that file was not found :( ")

# writing a file

text = "yooooooo\nthis is some text \n have a good day"
with open("test.txt",'w') as file: # here ',"w" ' indicates that the file is being writen and ',"r" ' indicates that the file is being read
    file.write(text)
text = "hey there you go..." #this will be over written to avoid this do append
with open("test.txt",'w') as file: # here ',"w" ' indicates that the file is being writen and ',"r" ' indicates that the file is being read
    file.write(text)
text = "yamete kuda sai...." 
with open("test.txt",'a') as file: # here ',"w" ' indicates that the file is being writen and ',"r" ' indicates that the file is being read
    file.write(text)

# copying a file..

#copyfile()  =  copies contents of a file
#copy()  =      copyfile() + permission mode + destination can be directory
#copy2() =      copy() + copies metadata (files creation and modification times)

import shutil

shutil.copyfile("test.txt",'copy.txt') # (src,dst)

#moving file 

source = "copy.txt"
destination = "copy.txt"

try:
    if os.path.exists(destination):
        print("There is already a file there")
    else:
        os.replace(source,destination)
        print(source + " was removed")
except FileNotFoundError:
    print(source + " was not found")
    