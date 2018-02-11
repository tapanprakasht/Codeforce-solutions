#include<iostream>
#include<cmath>
using namespace std;
int main() {
    long long n,z=0,o=0,a,i;
    string s;
    cin>>n>>s;
    for(i=0;i<n;i++) {
        if(s[i]=='1') o++;
        else z++;
    }
    cout<<abs(o-z)<<endl;
}