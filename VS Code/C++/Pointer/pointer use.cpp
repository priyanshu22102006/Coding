
#include<iostream>
using namespace std;

int main()
{
	int x = 18;
	float y = 7.9;
	
	//Creating  apointer which can store the address of x:
	//as x is an integer variable , so we need a integer datatype pointer
	
	int *ptrx = &x;
	cout<<"Address stored inside ptrx :"<<ptrx<<endl;
	cout<<"Value present at the address stored in ptr :"<<*ptrx<<endl; //dereference
	
	//Create a pointer that can store address of y 
	//y is a float variable , so we need to store it in a 
	//float datatype pointer 
	
	float *ptry = &y;
	cout<<"Address stored inside ptry :"<<ptry<<endl;
	cout<<"Value present at the address stored in ptry :"<<*ptry<<endl;
	
	//-----------------
	
	x=23;  //the bucket x is updated the value from 18 -> 23
	//but ptr is still pointing to same bucket
	// now if we derefernce ptr, we will get 23
	
	cout<<"Now updated value of x :"<<x<<endl;
	cout<<"ptr still pointing to same memory which has 23 instead of 18 -"<<*ptrx<<endl;
	
	//updating x with pointer 
	*ptrx = 50;
	cout<<"New value of x :"<<x<<endl;
	cout<<"New value pointed by ptr "<<*ptrx<<endl;
	
	int valueAtX = *ptrx;
	cout<<valueAtX<<endl;
	//storing the pointer sddress in another pointer
	int **ptrx2=&ptrx;
	cout<<ptrx2<<" "<<&ptrx;
	return 0;
}
