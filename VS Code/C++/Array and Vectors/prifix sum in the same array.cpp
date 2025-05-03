#include<iostream>
using namespace std;

int main()
{
	int size=5;
	int array[]={5,4,1,2,3};
	int sum=0;
	for(int i=0;i<size;i++)
	{
		array[i]=array[i]+sum;
		sum=array[i];
	}
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}	
	return 0;
}
