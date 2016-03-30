#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	long long int n,i=1;
	long long int sum=0;
	cin>>n;
	while(i<=n)
	{
		if(i%2!=0)
			sum+= -(i);
		else
			sum+= i;
		i++;
	}
	cout<<sum<<"\n";
	return 0;
}
