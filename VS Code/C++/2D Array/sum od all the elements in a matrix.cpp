#include<iostream>
using namespace std;

int main(){
	int r,c;

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
	int sum=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			sum=sum + arr[i][j];
		}	
	}
	cout<<sum;
	return 0;
}
