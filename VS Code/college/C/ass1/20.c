#include<stdio.h>
#include<math.h>
int main(){
    int num = 0,k = 0,temp;
    scanf("%d %d", &num, &k);
    temp = pow(10,k);
    printf("%d\n",num%temp/(temp/10));
    return 0;
}