#include<stdio.h>
#include<math.h>
int main(){
    int num  ;
    scanf("%d",&num);
    if(num%4==0 && num%400==0 || num%100!=0  ){
        printf("leap year")  ; 
    }
    else{
        printf("not leap year") ;
    }
    return 0;
}