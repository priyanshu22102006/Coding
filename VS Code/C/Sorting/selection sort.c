#include<stdio.h>

void Selection_Sort(int arr[],int size){
    for(int i = 0 ; i < size - 1 ; i++){
        int min_index = i; // Assume the first element is the minimum
        for(int j = i + 1 ; j < size ; j++){
            if(arr[j] < arr[min_index]){
                min_index = j; // Update the index of the minimum element
            }
        }
        // Swap the found minimum element with the first element
        if(min_index != i){
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
     
}

int main(){
    int size;
    printf("Enter Size of array :");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0 ; i<size ; i++){
        scanf("%d",&arr[i]);
    }

    Selection_Sort(arr,size);

    for(int i = 0 ; i<size ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}