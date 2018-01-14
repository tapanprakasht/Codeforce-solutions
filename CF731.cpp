#include<iostream>
#include<cmath>
using namespace std;
int main(){
    string s;
    int count =0,i,m,l;
    cin>>s;
    for(i=0;i<s.length();i++) {
        if(i==0) {
            l = abs(s[i] - 'a');
            m = 26 - abs(s[i] - 'a');
        } else {
            l = abs(s[i] - s[i-1]);
            m = 26 - abs(s[i] - s[i-1]);
        }
        count += (l<m)?l:m;
    }
    cout<<count<<endl;
}