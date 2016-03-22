#include<iostream>
using namespace std;
int main()
{
	long long t,n;
	cin>>t>>n;
	if(t%2==1) t++;
	if(n<=t/2) cout<<n*2-1<<endl;
	else
		cout<<(n-(t/2))*2<<endl;
	return 0;
}
