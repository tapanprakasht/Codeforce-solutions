#include<iostream>
using namespace std;
int main(){
    long long n,x,c=0,d;
    char ch;
    cin>>n>>x;
    while(n--) {
        cin>>ch>>d;
        if(ch=='+') {
            x += d;
        } else if(ch=='-') {
            if(d>x) c++;
            else x -= d;
        } 
    }
    cout<<x<<" "<<c<<endl;
}