#include<stdio.h>
#include<math.h>
int main(){
    int num,sum = 1,temp;
    scanf("%d",&num);
    for(int i = 1; i <= num;i++){
        sum *= i; 
    }
    printf("%d\n",sum);
    return 0;
}