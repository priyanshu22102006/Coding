#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int siz;
	cout<<"Enter size of the vector: ";
	cin>>siz;
	vector<int> v(siz);
	cout<<"enter value in vector:"<<endl;
	
	for(int i=0;i<v.size();i++)   //input fom the user
	{
		cin>>v[i];
	}
	
	for(int i=0;i<v.size();i++)      //displays the no is the vectors
	{
		cout<<v[i]<<"  ";
	}
	
	int sume=0;
	int sumo=0;
	for(int i=0;i<v.size();i++)         //diff of sum of even position number to sum of odd position number
	{
		if(i%2==0)
		{
			sume+=v[i];
		}
		else
		{
			sumo+=v[i];
		}
	}
	
	int finalsum=sume-sumo;
	cout<<endl<<finalsum;
	
	return 0;
}
