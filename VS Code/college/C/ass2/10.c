#include<stdio.h>
#include<math.h>
int main(){
    int x1 = 0,x2 = 1,x3,num;
    scanf("%d",&num);
    if(num==1){
        printf("0");
    }
    else if(num==2){
        printf("0 1");
    }
    else{
        printf("%d %d",x1,x2);
        for(int i = 3; i <=num;i++){
            x3 = x1 + x2; //1
            x1 = x2; //1
            x2 = x3; //1
            printf(" %d",x3);
        }
    }
    return 0;
}