#include<iostream>
using namespace std;
int main()
{
	int a[10]={0},i,n;
	bool flag1=false,flag2=false;
	for(i=1;i<=6;i++)
	{
		cin>>n;
		a[n]++;
	}
	for(i=1;i<=9;i++)
	{
		if(a[i]>=4) flag1 = true;
		if(a[i]==2 || a[i]==6) flag2 = true;
	}
	if(flag1)
	{
		if(flag2)
			cout<<"Elephant"<<endl;
		else
			cout<<"Bear"<<endl;
	}
	else
		cout<<"Alien"<<endl;
}