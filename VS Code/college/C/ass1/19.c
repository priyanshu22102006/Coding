#include<stdio.h>
int main(){
    int num = 0;
    scanf("%d", &num);
    printf("%d\n", num%1000/100 + num%100/10*10 + num%10*100 + (num/1000)*1000);
    return 0;
}