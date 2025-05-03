#include<iostream>
using namespace std;

int main(){
	int arr[]={2,8,6,4,1,3};
	int size = sizeof(arr)/sizeof(arr[0]);
	for (int i=0;i<size;i++){
		for (int j=0;j<size;j++){
			if(i==0){
				if (arr[j]>arr[i-1] and arr[j]<arr[i+1]){
					arr[i]=arr[j];
				}
			}
				if (arr[j]>arr[i-1] and arr[j]<arr[i+1]){
					arr[i]=arr[j];
				}
			
		}
	}
	for(int i=0;i<size;i++){
		cout<<arr[i];
	} 
	return 0;
}
