#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(int argc, const char *argv[])
{
	int n;
	long long int  first,second,mod1,mod2,p=0,r;
	cin>>n;
	cin>>first>>second;
	while(n>=0)
	{
		mod1 = first%10;
		mod2 = second%10;
		r = abs(mod1-mod2);
		if(r<(10-r))
		{
			p+=r;
		}
		else
		{
			p+=(10-r);
		}
		first = first/10;
		second = second/10;
		n--;

	}
	cout<<p<<"\n";
	return 0;
}
