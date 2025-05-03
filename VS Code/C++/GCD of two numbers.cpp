#include <iostream>
using namespace std;

void size(int arr[])
{
    s = (sizeof(arr)/sizeof(arr[0]));
}

int main(){
    int num1 = 12;
    int num2 = 20;
    int arr1[20]={};
    int arr2[20]={};
    int b = 2;
    while (num1 = true){   
        if(num1%b==0){
            num1 = num1/b;
            arr1[]=b;
        }
        else{
            b++;
        }
    }
    while (num2 = true){   
        if(num2%b==0){
            num2 = num2/b;
            arr2[]=b;
        }
        else{
            b++;
        }
    }
    int sum = 0;
    for(int i=0;i<size(arr1);i++){
        for(int j=0;j<size(arr2);j++){
            if(arr1[i]==arr2[j]){
                sum = arr1 * arr2;
            }
            else{
                continue;
            }
        }
    }
    cout<<"GCD :"<<sum;
    return 0;
}