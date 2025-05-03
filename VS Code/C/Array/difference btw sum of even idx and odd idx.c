#include<stdio.h>
int main(){
    int arr[10]= {3,4,2,5,6,1,8,9,10,11};
    int even_sum=0,odd_sum = 0 ;
    for(int i = 0 ; i<10 ; i++){
        if(i%2==0){
            even_sum+=arr[i];
        }
        else{odd_sum+=arr[i];}
    }
    printf("%d",even_sum-odd_sum);
    return 0;
}