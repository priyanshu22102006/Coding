#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int siz;
	cout<<"Enter the size: ";
	cin>>siz;
	
	vector<int> a(siz);
	
	cout<<"ENTER VALUES : ";
	for(int i=0;i<a.size();i++)
	{
		cin>>a[i];
	}
	
	int x;
	int occurance=0;
	cout<<"Enter a number to find out its occurance: ";
	cin>>x;
	
	for(int i=a.size()-1;i>=0;i--)
	{
		if(a[i]==x)
		{
			occurance++;
			//cout<<i<<" ";
		}
		
	}
	
	cout<<occurance;
	return 0;
}
