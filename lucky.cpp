#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	string str;
	int count,i;
	cin>>str;
	for (i = 0; i < str.length(); i++) {
		if(str[i]=='4' || str[i]=='7')
		{
			count++;
		}
	}
	if(count==7 || count==4)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
	return 0;
}
