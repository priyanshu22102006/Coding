#include<stdio.h>
#include<math.h>
int main(){
    int num,sum = 0,temp;
    scanf("%d",&num);
    temp = num;
    for (int i = temp; i > 0 ;i/=10){
        sum +=num%10;
        num/=10;
    }
    printf("%d",sum);
    return 0;
}