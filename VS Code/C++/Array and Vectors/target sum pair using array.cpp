#include<iostream>
using namespace std;

int main()
{
	int size;
	int array[size];
	cout<<"Enter then size of the array: ";
	cin>>size;
	
	
	cout<<" Now enter elements into the array: "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	
	int x;
		
	cout<<"target sum ";
	cin>>x;
	int occurance=0;
	for(int k=0;k<size;k++)
	{
		for(int j=k+1;j<size;j++) 
		{
			if(array[j]+array[k]==x)
			{
				occurance++;
			}
		}
	}
	cout<<occurance;
	
	return 0;
}
