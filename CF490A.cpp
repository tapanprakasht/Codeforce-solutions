#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,*a,x=0,y=0,z=0,i,j,*m,*k,*p;
    cin>>n;
    a = new int[n];
    m = new int[n];
    k = new int[n];
    p = new int[n];
    for(i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]==1) {
            m[x] = i+1;
            x++;
        } else if(a[i]==2) {
            k[y] = i+1;
            y++;    
        } else {
            p[z] = i+1;
            z++;
        } 
    }
    if(x!=0 || y!=0 || z!=0) {
        j = min(min(x,y),z);
        cout<<j<<endl;
    } else {
        cout<<"0\n";
    }
    for(i=0;i<j;i++){
        cout<<m[i]<<" "<<k[i]<<" "<<p[i]<<endl;      
    }

}