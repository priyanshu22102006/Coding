#include<iostream>
using namespace std;
void printArray(int arr[],int idx,int n){
	//base case 
	if(idx==n) return;
	//self work
	cout<<arr[idx]<<endl;
	//assumption
	printArray(arr,idx+1,n);
}
int main(){
	int num=5;
	int arr[]={6,4,1,9,3};
	printArray(arr,0,num);
	return 0;
}
