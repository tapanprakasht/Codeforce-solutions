#include<stdlib.h>
#include<stdio.h>

int main()
{
	int n,k,*a,i,count=0;
	scanf("%d%d",&n,&k);
	a = (int*) malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	i= 0;
	while(a[i]>=a[k-1] && i<n)
	{
		if(a[i]!=0)
		   count+=1;
		i++;
//	        printf("%d\n",count);

	}
	printf("%d\n",count);
	return 0;	
}
