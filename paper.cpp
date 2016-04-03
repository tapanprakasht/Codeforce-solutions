#include<iostream>
using namespace std;
int main()
{
	long long a,b,count =0,t;
	cin>>a>>b;
	while(b)
	{
		count+=(a/b);
		t = b;
		b = a%b;
		a = t;
	}
	cout<<count<<endl;
	
}
