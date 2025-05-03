#include<iostream>
using namespace std;

int main()
{
	/*WILD POINTER*/
	int *ptr;
	cout<<ptr<<endl;
	cout<<*ptr;//garbage value stored
	
	cout<<endl;
	/*NULL POINTER*/
	cout<<endl;
	
	int *p = NULL;//any pointer declared with null will have 0 as value...
	int *p1 = 0;
	int *p2 = '\0';
	cout<<p<<" "<<p1<<" "<<p2;
	
	cout<<endl;
	/*DANGLING POINTER*/
	cout<<endl;
	
	int *p3 = NULL;
	{
		int x=20;
		p3=&x;
		cout<<p3<<" ";
		cout<<*p3<<endl;
	}
	cout<<p3<<" ";
	cout<<*p3;
	
	cout<<endl;
	/*VOID POINTER*/
	cout<<endl;
	
	float f = 10.2;
	int y = 10;
	void *ptr1 = &f;
	ptr1 = &y;
	
	int *integerPointer = (int *)ptr1;  //this process of storing a void pointer into an integer pointer is called type casting 
	cout<<*integerPointer<<endl;
	return 0;
}
