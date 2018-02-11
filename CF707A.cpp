#include<iostream>
using namespace std;
int main() {
    int n,m,flag=0,i;
    char a;
    cin>>n>>m;
    for(i=1;i<=(n*m);i++) {
        cin>>a;
        if(a=='Y' || a=='M' || a=='C') flag=1;
    }
    if(flag) cout<<"#Color\n";
    else cout<<"#Black&White\n";
}