#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    int n,a,b,n1,n0,counter;
    char e,temp;
    vector<char> c;
    vector<int> d;
    while(t--){
        cin>>n>>a>>b;
        counter=0;
        for (int i=0;i<n;i++){
            cin >> e;
            c.push_back(e);
            if (c[c.size()-2]==c[c.size()-1]) {
                counter++;
            }
            else {
                d.push_back(counter);
                counter = 0;
            }
        }
        n1=0;
        n0=0;
        if (a>b){
            
        }
    }

    return 0;
}