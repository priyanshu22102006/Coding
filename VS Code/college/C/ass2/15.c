#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter the value of X , Y , Z: ");
    scanf("%d%d%d",&x,&y,&z);
    switch (x)
    {
    case 0:
        printf("%d",y+z);
        break;
    case 1:
        printf("%d",y-z);
        break;
    case 2:
        printf("%d",y*z);
        break;    
    case 3:
        printf("%d",y/z);
        break;    
    default:
        printf("try entering no 0,1,2,3");       
        break;
    }
    return 0;
}