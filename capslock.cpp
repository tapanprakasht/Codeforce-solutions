#include<iostream>
#include<locale>
using namespace std;
int main(int argc, const char *argv[])
{
	string str;
	int i;
	cin>>str;
	for (i = 0; i < str.size(); i++) {
			if (i==0) {
				cout<<(char)toupper(str[i]);
			}
			else
			{
				cout<<(char)tolower(str[i]);
			}
	}
	cout<<"\n";
	return 0;
}
