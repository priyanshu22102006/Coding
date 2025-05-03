#include<stdio.h>
#include<math.h>
int main(){
    // int a,b,c;
    double area,side,a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    side = (a+b+c)/2;
    area = sqrt(side*(side-a)*(side-b)*(side-c));
    printf("%lf %lf",area,side);
    return 0;
}