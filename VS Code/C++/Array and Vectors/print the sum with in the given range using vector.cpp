//this code runs in online compiler......but due to old version of dev c++ this code cant run here...:-) 
#include<iostream>
#include<vector>
using namespace std;
int add(vector<int> v(int size))
{
	
}
int main()
{
	int n;
	vector<int> v(n);
	cout<<"Enter length :";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		v.push_back(num);
	}

	int l;
	int r;
	cout<<"Enter starting no: ";
	cin>>l;
	
	cout<<"Enter last no: ";
	cin>>r;
	int sum=0;	
	if(r-1<n)
	{
		for(int i=l-1;i<=r-1;i++)
		{
			sum=sum + v[i];		
		}
	}
	else
	{
		cout<<"plz enter a number less than size!!";
	}
	cout<<sum;
	return 0;
}
