#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	string str;
	int i,flag=0;
	cin>>str;
	for (i = 0; i < str.length(); i++) {
		if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
		{
			flag=1;
			break;

		}
		else
		{
			flag=0;

		}

	}
	if (flag==1) {
		cout<<"YES\n";

	}
	else
	{
		cout<<"NO\n";

	}
	return 0;

}
