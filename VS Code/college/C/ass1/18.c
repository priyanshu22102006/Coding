#include<stdio.h>
int main(){
    int num = 0;
    scanf("%d", &num);
    printf("%d\n", num%10*10 + num%100/10 + (num/100)*100);
    printf("%d\n", num);
    return 0;
}
