#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	string str;
	int count=0,i,j,flag=0;
	cin>>str;
        for (i = 0; i < str.length(); i++) {
	      flag=0;
              for(j=0;j<i;j++)
	      {
		      if(str[i]==str[j])
		      {
			      flag=1;
			      break;
		      }
	      }
	      if(flag==0)
	      {
		      count++;
	      }
        }
	if(count%2==0)
	{
		cout<<"CHAT WITH HER!\n";
	}
	else
	{
		cout<<"IGNORE HIM!\n";
	}
	return 0;
}





