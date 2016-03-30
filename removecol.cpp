#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	int n,m,i,j,k;
	int count=0,flag=0;
	char a[101][101];
	cin>>n>>m;
	for (i = 0; i < n; i++) {
	     cin>>a[i];
	}
	i=0;
	while(i<n-1) {
		flag=0;
		for (j = 0; j < m; j++) {
		     if(a[i][j]==32 && a[i+1][j]==32)
		     {
			     continue;

		     }
		     else if(a[i][j]<a[i+1][j])
		     {
			     break;
		     }
		     else if(a[i][j]==a[i+1][j])
		     {
			     continue;
		     }
		     else
		     {
			     count++;
			     for (k = 0; k < n; k++) {
			     	a[k][j]=32;
			     }
			     flag=1;
			     break;
		     }
		}
		if(flag==1)
		{
			i=0;
		}
		else
		{
			i++;
		}
		
	}
	cout<<count<<"\n";
	return 0;
}