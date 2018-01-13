#include<iostream>
using namespace std;
int main() {
    int a[4],sum=0,i;
    string s;
    for(i=0;i<4;i++) cin>>a[i];
    cin>>s;
    for(i=0;i<s.length();i++) {
        sum += a[s[i]-1 - '0'];
    }
    cout<<sum<<endl;
}