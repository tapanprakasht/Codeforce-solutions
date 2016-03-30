#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, const char *argv[])
{
	int n,total=0,t,i;
	cin>>n;
	for (i = 0; i < n; i++) {
		cin>>t;
		total+=t;
	}
	cout<<ceil((float)total/4)<<"\n";
	return 0;
}
