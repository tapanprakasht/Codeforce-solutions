#include<iostream>
using namespace std;
int main() {
    int n,*a,m,x,y,left,right,i;
    cin>>n;
    a = new int[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    while(m--) {
        cin>>x>>y;
        left = y - 1;
        right = a[x-1] - y;
        if(x-2>=0) a[x-2] += left;
        if(x < n)  a[x] += right;
        a[x-1] = 0;
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<"\n";
}