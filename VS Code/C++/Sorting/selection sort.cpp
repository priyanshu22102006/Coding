#include <iostream>
using namespace std;

int main() {
    int arr[] = {6,5,3,4,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Selection sort algorithm
    for (int i = 0; i < n - 1; i++) {
        int maxIdx = 0;
        for (int j = 1; j < n - i; j++) {
            if (arr[j] > arr[maxIdx]) {
                maxIdx = j;
            }
        }
        // Swap the found maximum element with the last element of the unsorted part
        int temp = arr[n - i - 1];
        arr[n - i - 1] = arr[maxIdx];
        arr[maxIdx] = temp;
    }

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
