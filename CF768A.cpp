#include<iostream>
#include<set>
using namespace std;
int main() {
    set<long long> s;
    long long n,a;
    cin>>n;
    while(n--) {
        cin>>a;
        s.insert(a);
    }
    cout<<s.size()-2<<endl;
}