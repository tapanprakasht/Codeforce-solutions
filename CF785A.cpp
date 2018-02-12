#include<iostream>
using namespace std;
int main() {
    long long n,c=0;
    string s;
    cin>>n;
    while(n--) {
        cin>>s;
        if(s.compare("Tetrahedron") == 0) 
            c += 4;
        else if(s.compare("Cube") == 0)
            c += 6;
        else if(s.compare("Octahedron") == 0)
            c += 8;
        else if(s.compare("Dodecahedron") == 0)
            c += 12;
        else if(s.compare("Icosahedron") == 0)
            c += 20;
    }
    cout<<c<<endl;
}