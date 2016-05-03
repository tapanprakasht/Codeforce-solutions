#include<iostream>
using namespace std;
int main()
{
	long long d1,d2,d3,a,b,c,d,res;
	cin>>d1>>d2>>d3;
	a = 2*d1+2*d2;
	b = 2*d1+2*d3;
	c = 2*d2+2*d3;
	d = d1 + d2 + d3;
	a = (a<b)?a:b;
	c = (c<d)?c:d;
	res = (a<c)?a:c;
	cout<<res<<endl;
}
