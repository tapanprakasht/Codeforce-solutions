#include<iostream>
using namespace std;
int main()
{
	long long n,count=1;
	int h,m;
	int temph = -1 ,tempm = -1;
	cin>>n;
	while(n--)
	{
		cin>>h>>m;
		if(h==temph &&  m==tempm)
		{
			count++;
		}
			temph = h;
			tempm = m;
		
	}
	cout<<count<<endl;
}
