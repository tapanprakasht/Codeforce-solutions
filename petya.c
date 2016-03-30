#include<stdio.h>
#include<string.h>
int main()
{
	char str1[102],str2[102];
	scanf("%s%s",str1,str2);
	if(strcasecmp(str1,str2)<0)
	{
		printf("-1\n");
	}
	else if(strcasecmp(str1,str2)>0)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
	return 0;
}

