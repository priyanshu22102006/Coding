#include <stdio.h>
int main(){
    int a,last,rem,sec_last;
    printf("Enter a number: ");
    scanf("%d",&a);
    last = a%10;
    sec_last = (a/10)%10;
    a /=100;
    a = a*100 + last*10 + sec_last;
    printf("%d",a);
}