#include<stdio.h>
int main(){
    int arr[10]= {3,4,2,5,6,1,8,9,10,11};
    int temp,count=0 ;
    printf("Enter a number:");
    scanf("%d",&temp);
    for(int i = 0 ; i<10 ; i++){
        if(temp<arr[i]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}