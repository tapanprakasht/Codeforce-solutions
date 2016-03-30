#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	char ch;
	int white=0,black=0,i,j;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			cin>>ch;
			switch(ch)
			{
				case 'Q': white+=9;
					  break;
				case 'R': white +=5;
					  break;
				case 'B': white+=3;
					  break;
				case 'N': white+=3;
					  break;
				case 'P': white+=1;
					  break;
				case 'q': black+=9;
					  break;
				case 'r': black +=5;
					  break;
				case 'b': black+=3;
					  break;
				case 'n': black+=3;
					  break;
				case 'p': black+=1;
					  break;

			}
		}
	}
	if(white>black)
	{
		cout<<"White\n";
	}
	else if(black>white)
	{
		cout<<"Black\n";
	}
	else
	{
		cout<<"Draw\n";
	}
	
	
	return 0;
}
