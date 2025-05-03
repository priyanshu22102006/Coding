#include<iostream>
#include<vector>
using namespace std;

void odd_and_even(vector<int> &v)
{
	int left_pointer=0;
	int rigt_pointer=v.size()-1;
	
	while(left_pointer<rigt_pointer)
	{
		if(v[left_pointer]%2==1 && v[rigt_pointer]%2==0 )
		{
			swap(v[left_pointer],v[rigt_pointer]);
			left_pointer++; rigt_pointer--;
		}
		
		if(v[left_pointer]%2==0)
		{
			left_pointer++;
		}
		
		if(v[rigt_pointer]%2==1)
		{
			rigt_pointer--;
		}
	}
	return;
}

int main()
{
	vector<int> v(5);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	
	odd_and_even(v);
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
