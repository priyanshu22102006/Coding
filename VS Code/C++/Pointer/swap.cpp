#include<iostream>
using namespace std;
/*If we only write this then the numbers 
	will not get swaped as normally int datatype is 
	passed by value ot by reference so another coppies 
	of x and y will be generated wich only gets swaped 
	in the swap function but does nothing to the main function
void swap(int x,int y)
{
	int temp=x;
	x=y;
	y=temp;	
}

int main()
{
	int x, y;
		
	cin>>x>>y;
	swap(x,y);
	
	cout<<x<<" "<<y;
	
	return 0;
}*/
//--------------------------------------
void swap(int *x,int *y)//since we passed address so to store it we used *x
{
	int temp=*x;//dereferencing x
	*x=*y;
	*y=temp;	
}
int main()
{
	int x, y;
	int *ptrx=&x,*ptry=&y;	
	
	cin>>x>>y;
	
	swap(ptrx,ptry);
	
	cout<<x<<" "<<y;
	
	return 0;
}
