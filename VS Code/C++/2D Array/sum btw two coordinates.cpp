#include<iostream>
using namespace std;

int main(){
	int r,c;
	int l1,r1,l2,r2;
	cout<<"Enter no of rows :";
	cin>>r;
	cout<<"Enter no of column :";
	cin>>c;
	cout<<"Enter the elements into the array :"<<endl;
	int arr[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}	
	}
	
	cout<<"Enter starting coordinate :";
	cin>>l1>>r1;
	cout<<"Enter ending coordinate :";
	cin>>l2>>r2;
	int sum = 0;
	for(int i=l1;i<=l2;i++){
		for(int j=r1;j<=r2;j++){
			sum+=arr[i][j];
		}
	}
	cout<<sum;
	return 0;
}
