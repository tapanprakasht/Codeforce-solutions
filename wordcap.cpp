#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	string s;
	cin>>s;
	s[0] = toupper(s[0]);
	cout<<s<<"\n";
	return 0;
}
