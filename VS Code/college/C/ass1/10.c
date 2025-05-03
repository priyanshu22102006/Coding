#include <stdio.h>
int main(){
    int a,last,rem;
    printf("Enter a number: ");
    scanf("%d",&a);
    last = a%10;
    rem = a/100;
    printf("%d",rem*10+last);
}