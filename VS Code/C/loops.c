#include<stdio.h>
int main()
{
    int i;
    // for loop
    for(i=0; i<5; i++)
    {
        printf("Hello World\n");
    }
    
    // while loop
    i = 0;
    while(i < 0)
    {
        printf("Hello World\n");
        i++;
    }
    
    // do while loop
    i = 0;
    do
    {
        printf("Hello World\n");
        i++;
    } while(i < 0);
    
    return 0;
}