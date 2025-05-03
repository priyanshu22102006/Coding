#include <stdio.h>
int main(){
    int a,last,rem,sec_last,thr_last;
    printf("Enter a number: ");
    scanf("%d",&a);
    last = a%10;
    sec_last = (a/10)%10;
    thr_last = (a/100)%100;
    a /=1000;
    a = a*1000 + last*100 + sec_last*10 + thr_last;
    printf("%d",a);
}