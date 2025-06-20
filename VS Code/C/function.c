#include<stdio.h>

void sum(int a, int b)
{
    printf("Sum: %d\n", a + b);
}

void world()
{
    printf("World\n");
}
 

int main(){
    int a = 10, b = 20;
    
    sum(a,b); //with argument
    return 0;
}