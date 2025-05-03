#include <stdio.h>
int main(){
    int a,last,rem,sec_last,thr_last;
    printf("Enter a number: ");
    scanf("%d",&a);
    last = a%10;
    sec_last = (a/10)%10;
    a /=100; 
    printf("%d",(a*10+last)*(a*10+sec_last));
}