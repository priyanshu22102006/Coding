#include<stdio.h>
#include<string.h>
int main(){
    char str[50],vowel[] = {'a','e','i','o','u','A','E','I','O','U','\0'};
    int i = 0,vow = 0 ,cons = 0;
    gets(str);
    for(int i = 0; i < strlen(str); i++){
        int temp = vow;
        for(int j = 0; j < strlen(vowel); j++){
            if(vowel[j]==str[i]){
                vow++;
            }
            
        }
        if(vow==temp){cons++;}
        
    }
    printf("%d %d\n",vow,cons);
    return 0;
}