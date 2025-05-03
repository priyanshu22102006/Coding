#include<iostream>
using namespace std;

int main(){
	int array[5];

	for(int idx=0;idx<5;idx++){
		cin>>array[idx];
	}
		
	int max=array[0];
	
	for(int idx=1;idx<5;idx++){
		if(array[idx]>max){
			max=array[idx];
		}
	}
	
	cout<<max<<endl;
	return 0;
}
