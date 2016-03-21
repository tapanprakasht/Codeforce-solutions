#include<iostream>
using namespace std;
int main()
{
	int n,*a,*b,i;
	cin>>n;
	a = new int[n];
	b = new int[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		b[a[i]-1] = i+1;
	}
	for(i=0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
}
