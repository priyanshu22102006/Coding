#include<iostream>
using namespace std;
bool suffix(int array[],int size)
{
	
}
int main()
{
	int size;
	cout<<"length :";
	cin>>size;
	int array[size];
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	int total_sum=0;
	for(int i=0;i<size;i++)
	{
		total_sum+=array[i];
	}
	int ans=0;
	int sumprefix=0;
	for(int i=0;i<size;i++)
	{
		sumprefix+=array[i];	
		int sumsuffix=total_sum-sumprefix;
		if(sumsuffix==sumprefix)
		{
			ans=1;
			cout<<ans<<endl;
		}
	
	}
 	cout<<ans<<endl;

	return 0;
}
