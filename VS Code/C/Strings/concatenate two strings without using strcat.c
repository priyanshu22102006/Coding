#include<stdio.h>
#include<string.h>
int main(){
    char str[100], str1[10];
    gets(str);
    gets(str1);
    int size = strlen(str),size1 = strlen(str1),j=0;
    for(int i = size; i < size+size1; i++){
        str[i] = str1[j];
        j++;
    }
    puts(str);
    return 0;
}