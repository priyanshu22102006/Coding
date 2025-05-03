#include<stdio.h>
#include<math.h>
int main(){
    int num,sum = 0;
    scanf("%d",&num);
    while(num>0){
        sum = sum*10 +num%10;
        num /= 10;
    }
    printf("%d",sum);
    return 0;
}