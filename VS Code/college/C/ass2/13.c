#include<stdio.h>
#include<math.h>
int main(){
    int income;
    printf("Enter your income: ");
    scanf("%d",&income);
    
    if(income < 5000){
        printf("NO TAX DEDUCTION");
    } 
    else if(income >= 5000 && income <6000){
        printf("TAX DEDUCTION : %lf",0.1*(income-5000));
    }
    else if(income >= 6000 && income <15000){
        printf("TAX DEDUCTION : %lf",0.2*(income-6000)+100);
    }
    else if(income >= 15000){
        printf("TAX DEDUCTION : %lf",0.3*(income-15000)+1900);
    }
    return 0;
}