#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Type a string: ";
    getline(cin,str);
    for(int i = 0 ; i < str.length() ; i++){
        if(isalpha(str[i]) != 0 ){
            cout<<str[i];
        }
    }
    return 0 ;
}