#include<iostream>
#include<vector>
using namespace std;

int maxOnesRow(vector<vector<int> >& v){
	int maxOnes=INT_MIN;
	int maxOnesRow=-1;
	int column=v[0].size();
	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++){
			if(v[i][j]==1){
				int noOfOnes=column-j;
				if(noOfOnes>maxOnes){
					maxOnes=noOfOnes;
					maxOnesRow=i;
				}
				
			}
		}
	}
	return maxOnesRow;	
}

int main(){
	int r,c;
	vector<vector<int> > v(r, vector<int>(c));
	cout<<"Enter no of rows:";
	cin>>r;
	cout<<"Enter no of column:";
	cin>>c;

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>v[i][j];
		}
	}
	int reasult=maxOnesRow(v);
 cout<<reasult;	
	return 0;
}
