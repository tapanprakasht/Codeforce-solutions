#include<iostream>
using namespace std;
int main()
{
	int n,x=0,y=0,z=0;
	int a,b,c;
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		x+=a;y+=b;z+=c;
	}
	if(x==0 && y==0 && z==0)
		cout<<"YES"<<endl;
	else 
		cout<<"NO"<<endl;
}
