#include<iostream>
#include<set>
using namespace std;
int main() {
    set<int> s;
    int b = 4,a;
    while(b--) { cin>>a; s.insert(a); }
    cout<<4 - s.size()<<endl;
    return 0;
}