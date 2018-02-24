#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main() {
    int n,*a,i,t;
    set<int> s;
    set<int>::iterator it;
    cin>>n;
    a = new int[n];
    for(i=0;i<n;i++){
        cin>>t;
        s.insert(t);
    }
    i =0;
    for(it=s.begin();it!=s.end();++it){
        a[i] = *it;
        i++;
    }
    i--;
    if(i!=0 && n!=1){
        sort(a, a + i);
        cout<<a[1]<<endl;
    } else {
        cout<<"NO\n";
    }
}