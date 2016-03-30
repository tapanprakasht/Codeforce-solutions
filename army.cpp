#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	int n,d[100],a,b,y=0,i;
	cin>>n;
	for (i = 0; i < n-1; i++) {
		cin>>d[i];
	}
	cin>>a>>b;
	i=a-1;
	while(i<b-1)
	{
		y += d[i];
		i++;
	}
	cout<<y<<"\n";
	return 0;
}
