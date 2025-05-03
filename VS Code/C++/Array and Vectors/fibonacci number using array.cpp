#include<iostream>
using namespace std;
int fibonacci(int arr[],int n){
	int sum=0;
	arr[n];
	if(n>=2){
		for(int i=2;i<n;i++){
		arr[i]=arr[i-1]+arr[i-2];	
		sum=arr[i];
		}
	return sum;
	}
	else{
		return arr[n];
	}
}

int main(){
	int number;
	cout<<"Enter nth fibonacci no: ";
	cin>>number;
	int arr[number];
	arr[0]=0;
	arr[1]=1;
	int ans=fibonacci(arr,number);
	cout<<number<<"th fibonacci number is : "<<ans<<endl;
	for(int i=0;i<number;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}

//-----------------------------------------------------------------//

//int main(){
//	int num;
//	cout<<"Enter nth fibonacci no: ";
//	cin>>num;
//	int arr[num];
//	arr[0]=0;
//	arr[1]=1;
//	int sum=0;
//	for(int i=2;i<num;i++){
//		arr[i]=arr[i-1]+arr[i-2];
//		sum=arr[i];	
//	}
//	cout<<num<<"th fibonacci number is : "<<sum;
//	return 0;
//}
