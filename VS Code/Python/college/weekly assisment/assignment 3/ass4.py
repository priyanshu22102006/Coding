num = int(input("Enter nth number : "))

for i in range(0,num):
    if i<5: 
        temp=2**(i)
        print(temp)
    else:
        tempo = temp
        last_tempo = tempo%10  #6
        sec_tempo = tempo//10 #1
        temp = tempo + ( last_tempo + sec_tempo )
        
        print(temp)