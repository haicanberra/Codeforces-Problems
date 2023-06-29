#include <iostream>
using namespace std;

int main() {
    unsigned long long int t,n,a,b,x,y;
    cin >> t;
    while (t--) {
        cin >> x>>y;
        cin>>a>>b;
        if (a+a<=b)
        {cout << (x+y)*a << endl;}
        else 
        {cout << (max((x),(y))-min((x),(y)))*a+min((x),(y))*b<<endl;}
    }
}