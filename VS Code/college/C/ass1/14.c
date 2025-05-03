#include <stdio.h>
int main(){
    int a,b,last,rem,sec_last,thr_last;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    last = a%10;
    sec_last = b%10;
    a = (a/10)*10+sec_last;
    b = (b/10)*10+last;
    printf("%d",a*b);
    return 0;
}