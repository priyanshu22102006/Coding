#include<iostream>
using namespace std;

int main(){
	int fst=0;
	int snd=1;
	int num;
	cout<<"Enter nth fibonacci no: ";
	cin>>num;
	int sum=0;
	for(int i=3;i<=num;i++){
		sum=fst+snd;
		fst=snd;
		snd=sum;
	}
	cout<<num<<"th fibonacci number is : "<<sum;
	return 0;
}
