#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,a,b,mod,c;
	cin>>n>>a>>b;
	mod = (a+b)%n;
	if(mod<=0)
		mod = n + mod;
	cout<<mod<<endl;
}
