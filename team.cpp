#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	int n,a,b,c,i,p=0;
	cin>>n;
	for (i = 0; i < n; i++) {
		cin>>a>>b>>c;
		if((a+b+c)>=2)
		   p++;
	}
	cout<<p<<"\n";
	return 0;
}
