#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<int> s;
    int n,t,*a,i;
    cin>>n;
    a = new int[n];
    t = n;
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
    i=0;
    while(i<n) {
        while(a[i]!=t) {
            cout<<"\n";
            s.push(a[i]);
            i++;
        }
        cout<<t<<" ";
        while(!s.empty()) {
            t = s.top() -1;
            cout<<s.top()<<" ";
            s.pop();
        }
        t--; i++;
    }
}