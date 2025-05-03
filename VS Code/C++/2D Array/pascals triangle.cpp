#include<iostream>
using namespace std;

int factorial(int &n){  ///  n!
	int fact=1;
	for(int i=1;i<=n;i++){
		fact*=i;		
	}
	n=fact;
	return n;
}
int combination(int i,int j,int a,int ans){
	ans=(factorial(i)/(factorial(j)*factorial(a)));
	return ans;
}

int main(){
	int num;
	cin>>num;
	int array[num][num];
	for(int i=0;i<=num;i++){
		for(int j=0;j<=i;j++){
			int a=i-j;
			int ans=0;
			ans=combination(i,j,a,ans);  //i=n  j=r
			array[i][j]=ans; 
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
