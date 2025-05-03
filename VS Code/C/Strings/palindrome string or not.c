#include<stdio.h>
#include<string.h>
int main(){
    char str[50],temp[50];
    gets(str);
    strcpy(temp,str);
    strrev(temp);
    if(strcmp(str,temp)==0){printf("Bingo");}
    else{printf("Freak");}
    return 0;
}