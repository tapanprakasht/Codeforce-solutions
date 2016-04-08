#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	int a,b,count;
	cin>>a>>b;
	count=a;
	while(a>=1)
	{
		a=a/b;
		count+=a;
	}
	cout<<count<<"\n";

	return 0;
}
