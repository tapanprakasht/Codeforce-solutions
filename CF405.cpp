#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,*a,i;
    cin>>n;
    a = new int[n];
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a,a + n);
    for(i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}