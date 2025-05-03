#include <stdio.h>
int main(){
    double a,temp;
    printf("Enter a number: ");
    scanf("%lf",&a);
    temp = a*0.1;
    a/=10;
    printf("%lf",a);
}