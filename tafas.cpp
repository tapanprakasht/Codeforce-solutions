#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	int n;
	int first,second;
	cin>>n;
	if(n>=11 && n<20)
	{
	switch(n)
	{
		case 11: cout<<"eleven";break;
		case 12: cout<<"twelve";break;
		case 13: cout<<"thirteen";break;
		case 14: cout<<"fourteen";break;
		case 15: cout<<"fifteen";break;
		case 16: cout<<"sixteen";break;
		case 17: cout<<"seventeen";break;
		case 18: cout<<"eighteen";break;
		case 19: cout<<"ninteen";break;
	}
	return 0;
	}
	second = n/10;
	first = n- second;
	switch(first)
	{
		case  9: cout<<"ninety-";break;
		case 8: cout<<"eighty-";break;
		case 7: cout<<"seventy-;break;
		case 6: cout<<"sixty-";break;
		case 5: cout<<"fifty-";break;
		case 4: cout<<"forty-";break;
		case 3: cout<<"thirty-";break;
		case 2: cout<<"twenty-";break;
		

	}
	return 0;
}
