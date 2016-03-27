#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j,candi,*candidate,pos,win;
	long long temp,max;
	cin>>n>>m;
	candidate = new int[n];
	for(i=0;i<n;i++)
		candidate[i] = 0;

	for(i=1;i<=m;i++)
	{
		max = -1,candi = 0;
		for(j=1;j<=n;j++)
		{
			cin>>temp;
			if(temp>max)
			{
				max = temp;
				candi = j;
			}
		}
		candidate[candi-1]++;
	}
	win = -1;
	for(i=0;i<n;i++)
	{
		if(candidate[i]>win)
		{
			win = candidate[i];
			pos = i;
		}
	}
	cout<<pos+1<<endl;


}