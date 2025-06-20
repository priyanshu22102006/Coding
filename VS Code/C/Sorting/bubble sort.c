#include <stdio.h>
#include <stdbool.h>

void Bubble_sort(int arr[], int size){
    for(int i = 0 ; i < size - 1 ; i++){
        // bool isSwap = false;
        for(int j = 0 ; j < size - i - 1 ; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                // isSwap  = true;
            }
        }
        // if (!isSwap){
        //     break; // If no elements were swapped, the array is sorted
        // }
    }
}

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
    Bubble_sort(arr, size);

    //output array
    for(int i = 0; i<size ; i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}