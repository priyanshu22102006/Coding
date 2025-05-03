#include<stdio.h>
#include<string.h>
int main(){
    char str[50],str2[50];
    gets(str);
    // shor[0] = str[0];
    // for(int i=1,j=1; i<strlen(str);i++){
    //     if(str[i] == ' '){
    //         shor[j] = str[i+1];
    //         j++;
    //     }
    //     else continue;
    // }
    // for(int i = 0 ; i<strlen(shor)-1 ; i++){
    //     printf("%c",shor[i]);
    // }
    printf("%c",str[0]);
    for (int i=1 ; i<strlen(str);i++) {
        if (str[i] == ' '){
            printf("%c",str[i+1]);
        } 
    }
    return 0;
}