#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[50];
    printf("Type a string: ");
    fgets(str, sizeof(str), stdin);
    for(int i = 0 ; i < strlen(str) ; i++){
        if(isalpha(str[i]) != 0 ){
            printf("%c", str[i]);
        }
    }
    return 0;
}
