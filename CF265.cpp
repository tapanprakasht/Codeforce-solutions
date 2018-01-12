#include<iostream>
using namespace std;
int main() {
    string s,t;
    int pos = 0,i;
    cin>>s>>t;
    for(i=0;i<t.length();i++){
        if(s[pos] == t[i])  pos++;
    }
    cout<<pos + 1<<endl;
}