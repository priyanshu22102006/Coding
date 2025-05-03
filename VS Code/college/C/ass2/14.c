#include<stdio.h>
int main(){
    int X;
    printf("Enter the value of X: ");
    scanf("%d",&X);
    switch (X)
    {
    case 6:
        printf("Y: %d",X+10);
        break;
    case 7:
        printf("Y: %d",X*X);
        break;
    case 12:
        printf("Y: %d",2*X+4);
        break;    
    default:
        printf("Y: %d",X*6-1);       
        break;
    }
    return 0;
}