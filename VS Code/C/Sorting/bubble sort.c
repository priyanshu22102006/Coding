#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);   // 5

    // Input the array
    int arr[size]; //arr[5]
    for(int i = 0 ; i<size ; i++){
        printf("Enter the element: ");;
        scanf("%d",&arr[i]);
    }

    // Bubble sort
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size - 1 ; j++){
            if(arr[i]>arr[j]){
                int a = arr[i];
                int b = arr[j];
                a = a+b;
                b = a-b;
                a = a-b;
                arr[i] = a;
                arr[j] = b;
            }
            else{continue;}
        }
    }

    //output array
    for(int i = 0; i<size ; i++){
        printf("%d  ",arr[i]);
    }
}