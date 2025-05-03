#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cin>>num1>>num2;
    int constant = num1;
    for(int i=1;i<num2;i++){
        num1 = constant + num1;
    }
cout<<num1;
return 0;
}