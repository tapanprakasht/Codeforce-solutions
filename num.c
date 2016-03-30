#include<stdio.h>
int main()
{
       unsigned long long int num;
       scanf("%llu",&num );
       if(poweroftwo(num))
       {
	       printf("TAK\n");
       }
       else
       {
	       printf("NIE\n");
       }
}
int poweroftwo(int n)
{
	if(n==0)
	{
		return 0;
	}
	while(n!=1)
	{
		if(n%2!=0)
		{
			return 0;
		}
		n=n/2;
	}
	return 1;
}
