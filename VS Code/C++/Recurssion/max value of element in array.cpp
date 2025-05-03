#include<iostream>
using namespace std;
int printArray(int arr[],int idx,int n){
	//base case = if only one element is present in the array...
	if(idx==n-1) return arr[idx];
	//self work
	return max(arr[idx],printArray(arr,idx+1,n));	
}
int main(){
	int n=6;
	int fans=-1;
	int arr[]={6,4,1,9,3,13};
	int ans=printArray(arr,0,n);
	cout<<ans<<" ";
	return 0;
}
