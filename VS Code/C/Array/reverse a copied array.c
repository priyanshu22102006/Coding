#include<stdio.h>
int main(){
    int arr[10]= {3,2,1,7,6,5,4,3,2,1};
    int cp_arr[10],count =0;
    for(int i=9;i>=0;i--){
        cp_arr[count] = arr[i];
        count++;
    }
    for(int i=0;i<10;i++){
        printf("%d ",cp_arr[i]);
    }
    return 0;
}