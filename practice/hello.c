#include<stdio.h>
int main(){
    int arr[]={5,4,3,2,1}; // size 4

    int size = sizeof(arr)/sizeof(arr[0]); // 36 / 4 = 9

    for (int i = 0; i < size; i++)   
    {
        printf("%d \n", arr[i]);
    }
    

    return 0;
}