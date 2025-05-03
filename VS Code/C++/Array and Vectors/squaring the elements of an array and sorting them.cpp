#include<iostream>
using namespace std;

int main(){
	int size;
	int array[size];
	cout<<"Enter the length of the array :";
	cin>>size;
	for(int i = 0;i<size;i++){
		cin>>array[i];
	}
//	for(int i = 0;i<size;i++){
//		cout<<array[i]<<" ";
//	}
 	int ans[size];
	int i=0;
	int j=size-1;
	int k=size-1;
	while(i<=j and k>=0){
		if((array[i]*array[i])>(array[j]*array[j])){
			ans[k]=array[i]*array[i];
			i++;
			k--;
		}
		else{
			ans[k]=array[j]*array[j];
			j--;
			k--;
		}		
	}
	for(int i = 0;i<size;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
