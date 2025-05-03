#include <stdio.h>
int main(){
    int a,temp;
    printf("Enter a number: ");
    scanf("%d",&a);
    if ((a%100)/10 < 5){
        temp = (((a%100)/10)*2)*10;
        printf("%d",((a%10) + temp + (a/100)*100));
    }
    else{
        printf("Cant update");
    }
}