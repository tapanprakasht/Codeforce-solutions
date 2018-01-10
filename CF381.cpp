#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n,*a,ser[2]={0,0},i,j,p;
    cin>>n;
    a = new int[n];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0,j=n-1,p=0;p<n;p++){
        ser[p%2] += max(a[i],a[j]);
        if(a[i] == max(a[i],a[j])) i++;
        else j--;
    }
    cout<<ser[0]<<" "<<ser[1]<<endl;
}