#include<iostream>
using namespace std;

void process(int*arr,int n)
{
	for(int i=0;i<n;i++){
		cout<<*(arr+i)<<endl;
	}
}

int main()
{
	int arr[3]={15,12,19};
	int *ptr=&arr[0];
	
	cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<endl; //here arr acts as a base address of 0th index by defalut
	cout<<*++ptr<<" "<</*++arr*/endl;//12  here in dev c++ this part(*++arr) is giving error but in online compiler its working 
	
	for (int i=0;i<=2;i++)
	{
		cout<<*(arr+i)<<endl;
	}
	
	cout<<endl;
	//----------------------------
	cout<<endl;
	
	process(arr,3);
	
	cout<<endl;
	//----------------------------
	cout<<endl;
	
	int a[3]={11,12,13};
	int (*p)[3]=&a;
	cout<<p<<" "<<a<<" "<<*p<<" "<<*a<<endl;
	return 0;
}
