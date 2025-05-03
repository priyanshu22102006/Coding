#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool palindrome(string a){
    string cpya = a;
    reverse(a.begin(), a.end());
    // cout << (cpya == a) << endl;
    return (cpya == a);
}
int main(){
    string a;
    cout << "Enter a string: ";
    getline(cin, a);
    palindrome(a);
    return 0;
}