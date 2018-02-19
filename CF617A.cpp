#include<iostream>
using namespace std;
int main() {
    long long n;
    int mod;
    cin>>n;
    mod = n%5;
    if(mod!=0) 
        cout<<(n/5)+1<<endl;
    else 
        cout<<(n/5)<<endl;
}