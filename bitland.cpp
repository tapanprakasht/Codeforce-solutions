#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	string str;
	int n,x=0,i;
	cin>>n;
	for (i = 0; i < n; i++) {
		cin>>str;
		if(!str.compare("X++") || !str.compare("++X")){
			x++;
		}
		else
		{
			x--;
		}
	}
	cout<<x<<"\n";
	return 0;
}
