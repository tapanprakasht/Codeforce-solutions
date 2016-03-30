#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,i,temp,s=0;
	long double  r;
	cin>>n;
    for(i=1;i<=n;i++)       
	{
		cin>>temp;
		s += temp;
	}
	r = (long double)((long double)s/( long double)(n*100))*100;
	cout<<setprecision(12)<<fixed<<r<<"\n";
	return 0;
}
