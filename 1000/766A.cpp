#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    string a,b;cin>>a>>b;
    set<char> c,d;
    for (char e:a){
        c.insert(e);
    }
    for (char e:b){
        d.insert(e);
    }
    if (a==b){
        cout << -1;
    }
    else {
        cout << max(a.length(),b.length());
    }

    return 0;
}