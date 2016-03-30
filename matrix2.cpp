#include<iostream>
#include<cstdlib>
using namespace std;
int main(int argc, const char *argv[])
{
	int n,m,num,i,j;
	for (i = 1; i <=5; i++) {
		for (j = 1; j <=5; j++) {
			cin>>num;
			if(num==1)
			{n=i;m=j;}
		}
	}
	cout<<abs(3-n)+abs(3-m)<<endl;
	return 0;
}
