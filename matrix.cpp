#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	int n,m,a,b,count=0;
	cin>>n>>m;
	while(1)
	{

		count += (n/2)*(m/1);
		a=n;
                n=m;
		m=a%2;	
		if (n==0 || m==0) {
			break;
		}
		if (n==1 && m==1) {
			break;
		}

	}
	cout<<count<<"\n";
	return 0;
}
