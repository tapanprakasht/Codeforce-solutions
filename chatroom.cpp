#include<iostream>
#include<string>
using namespace std;
int main(int argc, const char *argv[])
{
	string str;
	char temp='h';
	int i,flag=0,l=0;
	cin>>str;
	for (i = 0; i < str.size(); i++) {
		if(str[i]==temp){
			flag++;
			if (temp=='h') {
				temp='e';
			}
			else if (temp=='e') {
				temp='l';
			}

			else if (temp=='l' && l==0) {
				temp='l';
				l++;
			}
			else if (temp=='l' && l==1) {
				temp='o';
				l++;
			}
			//cout<<temp<<"\n";
					
		}
	}
	if (flag>4) {
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
	return 0;
}
