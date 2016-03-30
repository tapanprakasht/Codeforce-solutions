#include<iostream>
#include<string>
using namespace std;
int main(int argc, const char *argv[])
{
	string str;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>str;
		if (str.size()<=10) {
			cout<<str<<"\n";
		}
		else
		{
			cout<<str[0]<<str.size()-2<<str[str.size()-1]<<"\n";
		}

	}
		return 0;
}
