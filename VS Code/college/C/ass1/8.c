#include <stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a%10<=5){
        printf("%d",(a%10)*2 + (a/10)*10);
    }
    else{
        printf("Cant update");
    }
}