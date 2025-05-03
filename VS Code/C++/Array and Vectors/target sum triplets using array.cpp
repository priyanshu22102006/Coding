#include<iostream>
using namespace std;

int main()
{
	int size;
	cout<<"Enter then size of the array: ";
	cin>>size;
	int array[size];
	cout<<" Now enter elements into the array: "<<endl;
	for(int i=0;i<size;i++)	{
		cin>>array[i];
	}
	
//	int size=5;
//	int array[]={3,1,2,4,0,6};

	int x;		
	cout<<"target sum ";
	cin>>x;
	int occurance=0;
	for(int a=0;a<size;a++){
		for(int k=a+1;k<size;k++){
			for(int j=k+1;j<size;j++){
				if(array[a]+array[j]+array[k]==x){
					occurance++;
				}
			}
		}
	}
	cout<<occurance;
	
	return 0;
}
