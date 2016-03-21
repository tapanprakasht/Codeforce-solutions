#include<iostream>
using namespace std;
int main()
{
	int t,count = 0,i=1,temp;
	string str;
	cin>>t;
	cin>>str;
	temp = str[0];
	while(i<=str.length())
	{
		while(str[i]==temp)
		{
			count++;
			i++;
		}
		
		if(temp!=str[i])
		{
			temp = str[i];
			i++;
		}
	}
	cout<<count<<endl;
}
