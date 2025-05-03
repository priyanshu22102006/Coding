#include<iostream>
using namespace std;

int largestnumberindex(int array[],int size)
{
	int max=INT_MIN;
	int maxindex=-1;
	for(int i=1;i<size;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
			maxindex=i;
		}
	}
	return maxindex;
}

int main()
{
	int size;
	cout<<"Enter size :";
	cin>>size;
	
	int array[size];
	
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	
	int indexoflargest=largestnumberindex(array,size);
	int largestelement=array[indexoflargest];
	for(int i=0;i<size;i++)
	{
		if(array[i]==largestelement )
		{
			array[i]=-1;		
		}
	}

	array[indexoflargest]=-1;
	
	int indexofsecondlargest=largestnumberindex(array,size);
	cout<<array[indexofsecondlargest]<<endl;
	return 0;
}
