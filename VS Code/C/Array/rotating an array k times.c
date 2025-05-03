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
    int size = 9;
    int arr[9]={0,1,2,3,4,5,6,7,8};
    int rotate;
    scanf("%d",&rotate); //20
    rotate = rotate%size; //2
    reverse(arr,0,size-1);
    reverse(arr,0,rotate-1);
    reverse(arr,rotate,size-1);
    for(int i=0;i<size-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}