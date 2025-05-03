#include<iostream>
using namespace std;
int sumOfArray(int arr[],int idx,int n){
	if(idx==(n-1)) {
		return arr[idx];
	}
	return arr[idx]+sumOfArray(arr,idx+1,n);
}
int main(){
	int num=5;
	int arr[]={2,3,5,20,1};
	int ans=sumOfArray(arr,0,num);
	cout<<ans;
	return 0;
}
