#include<iostream>                                    // ->  Function myst be always declared above the " int main() "
using namespace std ;                                //  ->  For int return type is necessary......while for void no retuen type is needed
int add(int a,int b)                                 //  ->  In case we wanna declare bellow " int main() " the we must have to declare a func prototype above the main func....like
{                                                     //     int add(parameter1,parameter2)
	cout<<a+b<<endl;                                  //     int main(){.....}
	return a+b;
}
int add(int a,int b,int c)
{
	cout<<a+b+c;
	return a+b;
}
int add(float a,float b)
{ 
	cout<<a+b;
	return a+b+c;
}
int main()
{
	add(4,9,10);
	return 0;
}
