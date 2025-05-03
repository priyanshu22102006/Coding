#include<iostream>
using namespace std;

int main()
{
	int size;
	int array[size];
	cout<<"Enter then size of the array: ";
	cin>>size;
	
	
	cout<<"Now enter elements into the array: "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	
	for(int k=0;k<size;k++)
	{
		for(int j=k+1;j<size;j++) 
		{
			if(array[j]==array[k])
			{
				array[j]=array[k]=-1;
			}
		}
	}
	
	int unique=0;
	for (int i = 0;i<size;i++)
	{
		if (array[i]>0)
		{
			cout<<array[i]<<" ";	
		}	
	}
	

	return 0;
}
