#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    vector<int> arr(N);
    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
    }
    reverse(arr.begin(), arr.end());
    
    for (int num : arr) {
        cout << num << " ";
    }   
    return 0;
}
