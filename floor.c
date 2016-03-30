#include<stdio.h>
long long int cei(float num)
{
	int n = (int) num;
	if(n==(float)num)
	{
		return n;

        }
	return n+1;
}
int main()
{
	int n,m,a;
	scanf("%d%d%d",&n,&m,&a);
        printf("%I64d\n",(long long)cei((float)n/a)*cei((float)m/a));
	return 0;
}
