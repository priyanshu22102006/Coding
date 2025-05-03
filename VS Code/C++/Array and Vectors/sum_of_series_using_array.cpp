#include<iostream>
using namespace std;

int main(){
	int array[9];
	for(int idx=0;idx<9;idx++)
	{
		cin>>array[idx];
	}
	int size = sizeof(array)/sizeof(array[0]);   //length of the array
	int ele;
	int sum=0;
	for(int idx=0;idx<size;idx++)
	{
	//	cout<<array[idx]<<endl;
		sum=sum+array[idx];
	}
	cout<<sum;
	return 0;
}
