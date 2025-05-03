#include<stdio.h>
int main(){
    int arr[10]= {3,4,2,5,6,1,8,9,10,11};
    for(int i = 0 ; i<10 ; i++){
        if (i%2==0){
            arr[i] = arr[i] + 10;
        }
        else{arr[i]*=2;}
    }
    for(int i = 0 ; i<10 ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}