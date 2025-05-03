import os

# reading a file

file = open('C:/Users/priya/OneDrive/Desktop/programing/vs code/python/File Handeling/test.txt','r')
data = file.read()
print(data)
file.close()

#appending to a file

file = open('C:/Users/priya/OneDrive/Desktop/programing/vs code/python/File Handeling/test.txt','a')
file.write('Can i get a hooyah....!!')
file.close()

#reading a file

file = open('C:/Users/priya/OneDrive/Desktop/programing/vs code/python/File Handeling/test.txt','r')
data = file.read()
print(data)
file.close()

#writing a file

file = open('C:/Users/priya/OneDrive/Desktop/programing/vs code/python/File Handeling/test.txt','w')
file.write('Can i get a hooyah....!!')
file.close()

#reading a file

file = open('C:/Users/priya/OneDrive/Desktop/programing/vs code/python/File Handeling/test.txt','r')
data = file.read(5) #reads only bracket amount of characters
print(data)
print(type(data))
file.close()

f = open('C:/Users/priya/OneDrive/Desktop/programing/vs code/python/File Handeling/test1.txt','r')
print(f.readline())
print(f.readline())
for line in f:
    line = line.rstrip()
    print(line)
file.close()

f = open('C:/Users/priya/OneDrive/Desktop/programing/vs code/python/File Handeling/test1.txt','r')
data = f.read()
n_data = data.replace('Priyanshu','Tojo')
print(n_data)
temp = data.find('you')
if temp != -1:
    print('you got her baby.....')
else:
    print('uskehi khayalo maihi khoya raho.....') 
