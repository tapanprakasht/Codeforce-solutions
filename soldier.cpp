#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long k,n,w,sum=0,i,out;
	cin>>k>>n>>w;
	out= ((w*(w+1))*k/2)-n;	
	out = (out>=0)?out:0;
	cout<<out<<endl;
}
