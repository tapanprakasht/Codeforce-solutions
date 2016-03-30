#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	int n,a[1001];
	int j,i,t,max,out;
	cin>>n;
	for (i = 0; i < n; i++) {
		cin>>a[i];
	}
	out=10000;
	for (i = 1; i < n-1; i++) {
		max =0;
		for (j = 0; j < n-1; j++) {
			if(j==i)
				continue;
			if(j+1==i)	
			{
				t=a[j+2]-a[j];
				
			}
			else
			{
			     
				t=a[j+1]-a[j];
                        }
		  	if(t>max)	
				max=t;
		}
		if(max<out)
			out=max;
			


	}
	cout<<out<<"\n";
	return 0;
}
