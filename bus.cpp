#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	int k,count=1,j,i;
	char bus[4][11];
	cin>>k;
	for (i = 0; i < 11; i++) {
	    for (j = 0; j < 4; j++) {
		 if(j==2 && i>0)
		 {
			 bus[j][i]='.';
		 }
			 		
		 else  if(count<=k) 	
		 {
			  bus[j][i]='0'; 
			  count++;
		 }
			   
		 else
			 bus[j][i]='#';
	    }
	}
	cout<<"+------------------------+\n";
	for (i = 0; i < 4; i++) {
		cout<<"|";
		for (j = 0; j < 11; j++) {
			cout<<bus[i][j]<<".";
			if(i==0 && j==10)
				cout<<"|D|)";
			else if(i==1 && j==10)
				cout<<"|.|";
			else if(i==2 && j==10)
				cout<<"..|";
			else if(i==3 && j==10)
				cout<<"|.|)";
		}
		cout<<"\n";
		
	}
        cout<<"+------------------------+\n";
	
	return 0;
}
