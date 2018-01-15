#include<iostream>
using namespace std;
int main() {
    int k,r,c=1,flag=1,v;
    cin>>k>>r;
    while(flag) {
        v = k * c;
        if(v%10==r || v%10==0) {
            flag = 0;
            break;
        }
        c++;
    }
    cout<<c<<endl;
}