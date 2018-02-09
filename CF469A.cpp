#include<iostream>
using namespace std;
int main() {
    int n,p,q,*a,t,flag,i;
    cin>>n;
    a = new int[n+1];
    for(i=0;i<=n;i++) a[i] = 0;
    cin>>p;
    for(i=1;i<=p;i++) {
        cin>>t;
        a[t]++;
    }
    cin>>q;
    for(i=1;i<=q;i++) {
        cin>>t;
        a[t]++;
    }
    flag = 0;
    for(i=1;i<=n;i++) {
        if(a[i]==0) {
            flag = 1; break;
        }
    }
    if(!flag) cout<<"I become the guy.\n";
    else cout<<"Oh, my keyboard!\n";
}