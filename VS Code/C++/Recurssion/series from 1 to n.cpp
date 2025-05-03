#include<iostream>		//both of these code will work
using namespace std;	
void numbers(int n){			//void numbers(int n){
	if(n==1 and n>0){			//	//base case
		cout<<n<<" ";			//	if (n<1) return;
		}						//	//self work
	else{						//	numbers(n-1);
		numbers(n-1);			//	//assumption
		cout<<n<<" ";			//	cout<<n<<" ";
	}							//	}
}
int main(){
	int num;
	cin>>num;
	numbers(num);
	return 0;
}

