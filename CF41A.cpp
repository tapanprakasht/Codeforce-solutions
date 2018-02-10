#include<iostream>
using namespace std;
int main() {
    int flag = 0,i,j;
    string a,b;
    cin>>a>>b;
    for(i=0,j=b.length()-1;i<a.length() && j>=0;i++,j--){
        if(a[i]!=b[j]) {
            flag = 1;break;
        }
    }
    if(!flag) cout<<"YES\n";
    else cout<<"NO\n";
}