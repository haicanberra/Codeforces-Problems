#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t;
    long long int a,b,c;
    float d,e;
    while (t--)
    {cin >>a>>b>>c;
    if (a < c){
        cout << 1<< " ";
    }
    else {
        cout << -1 << " ";
    }
    if (a*b > c){
        cout << b << "\n";
    }
    else {
        cout << -1 << "\n";
    }
    }

    return 0;
}