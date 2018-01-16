#include<iostream>
using namespace std;
int main() {
    long long n,b,d,a,s=0,count=0;;
    cin>>n>>b>>d;
    while(n--){
        cin>>a;
        if(a<=b) {
            s += a;
        } 
        if(s>d) {
            count++; s =0;
        }
    }
    cout<<count<<endl;
}