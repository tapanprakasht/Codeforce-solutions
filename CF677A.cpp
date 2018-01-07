#include<iostream>
using namespace std;
int main() {
    int n,h,count=0,a;
    cin>>n>>h;
    while(n--){
        cin>>a;
        if(a>h) count += 2;
        else count++;
    }
    cout<<count<<endl;
    return 0;
}