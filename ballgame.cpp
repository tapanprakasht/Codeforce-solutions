#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	int n,i,a=1;
	cin>>n;
	for(i=1;i<n;i++)
	{
		a +=i;
		if(a%n==0)
			cout<<n<<" ";
		else		
		 	cout<<a%n<<" ";
	}
	cout<<"\n";
	return 0;
}
