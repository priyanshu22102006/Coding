#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the size of the vector: ";
	cin>>n;
	vector<int> v(n);

	int element;
	for(int i=0;i<v.size();i++){
		cout<<"The value to be entered in the vector "<<i<<" is :";
		cin>>v[i];
	}
	
	int num;
	cout<<"enter a desired no to find last position in the vector: ";
	cin>>num;
	int occurance=-1;
	for(int i=0;i<v.size();i++){
		if (v[i]==num){
			occurance=i;
		}
	}
	
	cout<<occurance;
	
	return 0;
}
