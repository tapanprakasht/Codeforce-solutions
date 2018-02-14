#include<iostream>
using namespace std;
int main() {
    string s[4];
    int i,j,b=0,w=0,flag=0;
    for(i=0;i<4;i++) {
        cin>>s[i];
    }
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            b = 0; w=0;
            if(s[i][j]=='#') b++;
            if(s[i][j+1]=='#') b++;
            if(s[i+1][j]=='#') b++;
            if(s[i+1][j+1]=='#') b++;
            if(s[i][j]=='.') w++;
            if(s[i][j+1]=='.') w++;
            if(s[i+1][j]=='.') w++;
            if(s[i+1][j+1]=='.') w++;
            if(w >= 3 || b >= 3) { flag = 1; break;}
        }
    }
    if(flag) { cout<<"YES\n";  } 
    else {cout<<"NO\n";}
}