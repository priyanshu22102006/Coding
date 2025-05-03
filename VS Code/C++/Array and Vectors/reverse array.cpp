#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& v,int i,int j){
	while(i<j){
		swap(v[i],v[j]);
		i++;
		j--;
	}
}

int main(){
	int n;
	vector<int> v(n);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int l=n-1;
	
	reverse(v,0,l);
	
	for(int i=0;i<n;i++){
		cout<<v[i];
	}
	return 0;
}
