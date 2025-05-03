#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    scanf("%[^\n]s",&str);
    for(int i=0; i<strlen(str);i++){
        if(str[i]==' '){
            continue;
        }
        else{
            int x = str[i];
            x-=32;
            str[i] = (char)x;
        }
    }
    puts(str);
    return 0;
}