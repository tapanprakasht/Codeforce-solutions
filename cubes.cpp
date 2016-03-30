#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	int n,i;
	cin>>n;
	for (i=0; (i*(i+1)*(i+2))/6<=n; i++);
	cout<<i-1<<"\n";
	return 0;
}
