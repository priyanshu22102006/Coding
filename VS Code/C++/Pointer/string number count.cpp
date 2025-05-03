#include<iostream>
using namespace std;
void firstAndLastIndex(string s,char ch,int *first,int *last)
{
	for(int i=0;i<s.size();i++){
		if (s[i]==ch) first=i;
		break;
	}
	for(int i=s.size()-1;i>=0;i++){
		if (s[i]==ch) last=i;
		break;
	}
}
int main()
{
	string s = "aaaabac";
	char ch = 'a';
	int first;
	int last;
	
	int *prtf=&first;
	int *ptrl=&last;
	
	firstAndLastIndex(s,ch,ptrf,ptrl);
	
	cout<<*prtf<<" "<<*ptrl<<endl;
	cout<<first<<" "<<last<<endl;
	
	return 0;
}
