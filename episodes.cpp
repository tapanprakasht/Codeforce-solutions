#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
       long long int n,s=0,k,i;
	cin>>n;
	for (i = 0; i < n-1; i++) {
	      cin>>k;
      	      s+=k;	      
	}
	cout<<((n*(n+1))/2)-s<<"\n";
	return 0;
}
