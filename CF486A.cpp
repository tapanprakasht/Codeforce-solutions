#include<iostream>
using namespace std;
int main() {
    long long n,t;
    cin>>n;
    if(n%2==0) {
        t = n/2;
        cout<<(t*(t+1)) - (t*t)<<endl;
    } else {
        t = ((n-1)/2) + 1;
        cout<<(-1*t*t) + ((t-1)*t)<<endl;
    }
}