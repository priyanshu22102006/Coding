#include<iostream>
using namespace std;

int main()
{
	int x=20;
	double dec=9.8;
	
	int *ptrx=&x;
	double *ptrd=&dec;
	
	cout<<"The size of x : "<<sizeof(x)<<endl;
	cout<<"The size of dec : "<<sizeof(dec)<<endl;
	
	cout<<ptrx<<" "<<(ptrx+1)<<endl;
	cout<<ptrd<<" "<<(ptrd+1)<<endl;
	
	cout<<endl;
	cout<<endl;
	//---------------------------------------
	cout<<endl;
	cout<<endl;
	
	int arr[2]={1,19};
	int *ptr=&arr[0];
	
	cout<<arr[0]<<" "<<arr[1]<<endl;
	cout<<"The value ptr is pointing "<<*ptr<<" whose address is "<<ptr<<endl;
	cout<<*ptr++<<endl;
	cout<<"After incrementing ptr is pointing "<<*ptr<<" whose address is "<<ptr<<endl;
	cout<<(*ptr)++<<endl;
	cout<<*ptr;
	
	cout<<endl;
	cout<<endl;
	//---------------------------------------
	cout<<endl;
	cout<<endl;
	
	int arr1[2]={2,8};
	int *ptr1=&arr1[0];
	cout<<*ptr1<<" "<<ptr1<<endl;
	cout<<*++ptr1<<" "<<ptr1<<endl;//8
	cout<<++*ptr1<<endl;//9
	
	return 0;
}
