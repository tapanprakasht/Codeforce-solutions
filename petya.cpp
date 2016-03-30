#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string first,second;
	cin>>first>>second;
	if(strcmp(first,second)<0)
	{
		cout<<"-1\n";
	}
	else if(strcmp(first,second)>0)
	{
		cout<<"1\n";
	}
	else
	{
		cout<<"0\n";
	}
	return 0;
}
