#include<iostream>
using namespace std;
int main()
{
	int array[]={1,1,0,0,1,0,1,0};
	int size=8;
	int zeros=0;
	
	for(int i = 0;i<size;i++)
	{
		if(array[i]==0) zeros++;
	}
	
	int ones=size-zeros;
	
	for(int i=0;i<zeros;i++)
	{
		array[i]=0;
	}
	
	for(int i=ones;i<size;i++)
	{
		array[i]=1;
	}
	
	for(int i = 0;i<size;i++)
	{
		cout<<array[i]<" ";
	}
	
	return 0;
}
