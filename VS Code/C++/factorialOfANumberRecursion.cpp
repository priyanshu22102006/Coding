#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==1) return n;

    int var = n * factorial(n-1);
    return var;
}

int main()
{
    int num=0;

    cout<<"Enter a number : ";
    cin>>num;

    int var = factorial(num);

    cout<<"Factorial of "<<num<<" is: "<<var;

    return 0;
}