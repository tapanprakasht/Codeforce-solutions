#include<iostream>
#include<string>
#include<locale>
using namespace std;
int main(int argc, const char *argv[])
{
	string str;
	int i;
	cin>>str;
	for (i = 0; i < str.size(); i++) {
		if(str[i]!='A' &&  str[i]!='a' &&  str[i]!='Y' &&  str[i]!='y' &&  str[i]!='E' &&  str[i]!='e' &&  str[i]!='I' &&  str[i]!='i' &&  str[i]!='O' &&  str[i]!='o' &&  str[i]!='U' &&  str[i]!='u' )
		{
                       cout<<"."<<(char)tolower(str[i]);
		}
	}
	cout<<"\n";
	return 0;
}
