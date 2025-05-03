// Find Quotient and reminder
#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter two number : \n");
    scanf("%d %d",&a,&b);
    c = a/b;
    d = a % b;
    printf("%d     %d",c,d);
}