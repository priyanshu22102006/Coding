#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int size = strlen(str);
    //Using in build functions
    // puts(strrev(str));
    //using loop
    for(int i=0,j=size-1 ; i<=j ; i++,j--){
        char c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
    puts(str);
    return 0;
}