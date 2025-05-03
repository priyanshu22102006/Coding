#include<stdio.h>
#include<string.h>
int main(){
    char str[50],str_cpy[50];
    gets(str);
    for(int i=0;i<strlen(str);i++){
        str_cpy[i]=str[i];
    }
    puts(str_cpy);
    return 0;
}