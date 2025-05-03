#include<iostream>
using namespace std;

int main(){
	int num;
	int array[]={1,99,69,87,450,69};
	int size = sizeof(array)/sizeof(array[0]);
	int ans=-1;
	
	cout<<"Enter a deisred num to check whether present in the array or not: ";
	cin>>num;
	
	for (int indx=0;indx<size;indx++){
	
		if (array[indx]==num){
			ans=indx; 
		//	cout<<ans;
		}
	}
	
	cout<<ans;
	return 0;
}
