#include<iostream>
using namespace std;
int main() {
    int n,*a,*h,count =0,i,j;
    cin>>n;
    a = new int[n];
    h = new int[n];
    for(i=0;i<n;i++){
        cin>>h[i]>>a[i];
    }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(h[i] == a[j]) count++;
            if(a[i] == h[j]) count++;
        }
    }
    cout<<count<<endl;
}