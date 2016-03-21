// Translation - Problem DIV2 41A
#include<iostream>
using namespace std;
int main()
{
	string s,t;
	int i,flag=0,j;
	cin>>s>>t;
	for(i=t.length()-1,j=0;i>=0 && j<s.length();i--,j++)
	{
		if(s[j]!=t[i])
		{
			flag=1;
			break;
		}
	}
	if(flag)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	return 0;
}
