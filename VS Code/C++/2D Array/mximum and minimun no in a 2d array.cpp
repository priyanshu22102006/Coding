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
	int min=INT_MAX;
	int max=INT_MIN;
	int maxIndexi=-1;
	int maxIndexj=-1;
	int minIndexi=-1;
	int minIndexj=-1;
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if (arr[i][j]>max){
				max=arr[i][j];
				maxIndexi=i;
				maxIndexj=j;
			}
		}	
	}			
	cout<<"max no is:"<<max<<endl<<"row no:"<<maxIndexi<<endl<<"column no:"<<maxIndexj<<endl;
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if (arr[i][j]<min){
				min=arr[i][j];
				minIndexi=i;
				minIndexj=j;
			}
		}	
	}			
	cout<<"min no is:"<<min<<endl<<"row no:"<<minIndexi<<endl<<"column no:"<<minIndexj<<endl;
	return 0;
}
