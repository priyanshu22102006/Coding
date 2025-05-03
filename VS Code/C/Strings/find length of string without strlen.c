#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    gets(str);
    int size = 0;
    while(str[size]!='\0'){
        size++;
    }
    printf("%d\n",size);
    return 0;
}