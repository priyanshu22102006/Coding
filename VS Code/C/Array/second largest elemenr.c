#include<stdio.h>
#include<limits.h>
int main(){
    int max = INT_MIN ,smax =INT_MIN;
    int arr[10]= {3,2,1,7,6,5,4,3,2,1};
    for(int i = 0 ; i<10 ; i++){    
        if(arr[i]>max){
            smax = max;
            max = arr[i];
        }
        else if(smax<arr[i]){
            smax=arr[i];
        }
    }
    // for(int j = 0;j<10;j++){
    //     if(smax<arr[j]&&smax<max){
    //         smax = arr[j];
    //     }
    // }
    printf("%d %d",max,smax);
    return 0;
}