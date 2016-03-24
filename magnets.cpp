#include<iostream>
using namespace std;
int main()
{
	long long i,n,temp=00,count=0,a;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		if(temp!=a)
			count++;
		temp = a;
	}
	cout<<count<<endl;
}