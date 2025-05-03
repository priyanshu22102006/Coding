#include<stdio.h>
#include<math.h>
int main(){
    int num  ;
    scanf("%d",&num);
    if(num>90){
        printf("EX"); 
    }
    else if(89>=num && 80<num){
        printf("A") ;
    }
    else if(79>=num && 70<num){
        printf("B") ;
    }
    else if(69>=num && 60<num){
        printf("C") ;
    }
    else if(59>=num && 50<num){
        printf("D") ;
    }
    else if(49>=num && 35<num){
        printf("P") ;
    }
    else{
        printf("E") ;
    }
    return 0;
}