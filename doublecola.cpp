#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	char s[][9]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
	int n;
	cin>>n;
	n--;
	while(n>4)
	{
		n=(n-5)/2;
	}
	cout<<s[n]<<"\n";
	return 0;
}
