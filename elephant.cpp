#include<iostream>
using namespace std;
int main()
{
	long long x,out;
	cin>>x;
	if(x%5==0)
		out = x/5;
	else
		out = x/5 + 1;
	cout<<out<<endl;
}
