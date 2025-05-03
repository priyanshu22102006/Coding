#include<stdio.h>
void reverse(int arr[], int i, int j){
    while(i<j){
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
        i++;
        j--;
    }
}
int main(){
    int arr[9]={0,1,2,3,4,5,6,7,8};
    reverse(arr,2,5);
    for(int i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}