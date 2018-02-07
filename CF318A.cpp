#include<iostream>
using namespace std;
int main() {
    long long n,k,h1,h2;
    cin>>n>>k;
    if(n%2==0) {
        h1 = h2 = n/2;
    } else {
        h1 = (n/2) + 1;
        h2 = n/2;
    }
    if(k<=h1) {
        cout<<1+(k-1)*2<<endl;
    } else {
        cout<<2+(k-h1-1)*2<<endl;
    }
}