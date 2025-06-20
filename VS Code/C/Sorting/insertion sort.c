#include<stdio.h>

void Insertion_sort(int arr[], int size){
    for(int i = 1 ; i < size ; i++){
        int temp = arr[i] , j = i - 1;
        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main(){
    int size;
    printf("Enter Size of array :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter elements of array :\n");
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&arr[i]);
    }

    Insertion_sort(arr,size);

    for(int i = 0 ; i < size ; i++){
        printf("%d",arr[i]);
    }
    return 0;
}