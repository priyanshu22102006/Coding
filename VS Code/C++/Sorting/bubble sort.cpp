#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    // Input the array
    int arr[size];
    for(int i = 0 ; i<size ; i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }

    // Bubble sort
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size - 1 ; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
            else{continue;}
        }
    }

    //output array
    for(int i = 0; i<size ; i++){
        cout<<arr[i];
    }
}