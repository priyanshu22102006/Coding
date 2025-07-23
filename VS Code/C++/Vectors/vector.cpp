#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>& v){
    for(int i = 0 ; i<v.size() ; i++ ){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){

    vector<int> V = {1,2,3,4,5,6,7,8,9} ;
    // printVector(V);
    cout<< V.capacity() << endl; // Output the capacity of the vector
    return 0;
}