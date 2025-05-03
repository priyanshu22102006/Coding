#include<stdio.h>
#include<string.h>

void message();
int main(){
    int a;  
    a = message();

    return 0;
}

void message(){
    printf("Hello World!\n");
    return;
}


// here the error is void function is returning an int value