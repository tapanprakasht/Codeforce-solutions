#include<iostream>
using namespace std;
int main() {
    int n,a[26]={0},flag=0,i;
    string s;
    cin>>n>>s;
    for(i=0;i<n;i++) {
        if(s[i]>='a' && s[i] <= 'z')
            a[s[i]-'a']++;
        else 
            a[s[i]-'A']++;
    }
    for(i=0;i<26;i++) {
        if(a[i]==0){ flag =1; break;}
    }
    if(!flag) cout<<"YES\n";
    else cout<<"NO\n";
}
