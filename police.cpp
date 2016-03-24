#include<iostream>
using namespace std;
int main()
{
	long long i,n,hired=0,crime,input,count=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>input;
		if(input>0)
			hired+=input;
		if(input<0)
		{
			if(hired!=0)
				hired--;
			else
				count++;
		}
	}
	cout<<count<<endl;
}