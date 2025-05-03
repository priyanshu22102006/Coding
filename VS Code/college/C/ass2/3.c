#include<stdio.h>
#include<math.h>
int main(){
    double a, b, c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if (pow(a,2) == pow(b,2)+pow(c,2) || pow(c,2) == pow(a,2)+pow(b,2) || pow(b,2)==pow(a,2)+pow(c,2)){
        printf("Right angled triangle");  
    }
    return 0;
}