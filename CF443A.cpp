#include<iostream>
using namespace std;
int main() {
    string s;
    int a[26] = {0},c=0,i;
    getline(cin,s);
    for(i=0;i<s.length();i++) {
        if(s[i]>='a' || s[i]<='z') {
            if(a[s[i]-'a']==0) a[s[i]-'a']++;
        }
    }
    for(i=0;i<26;i++){
        c += a[i];
    }
    cout<<c<<endl;
}