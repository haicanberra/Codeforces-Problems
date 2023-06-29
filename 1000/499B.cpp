#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n,m; cin >> n >> m; 
    vector<string> a,d;
    string b,c,e;
    while (m--) {
        cin >> b >> c;
        if (b.length()>c.length()) {
            a.push_back(c);
            d.push_back(b);
        }
    }
    bool found=false;
    while (n--) {
        cin >> e;
        found=false;
        for (int i =0;i<d.size();i++){
            if (e == d[i]) {
                cout << a[i] << " ";
                found = true;
            }
        }
        if (found == false) {
            cout << e << " ";
        }
    }

    return 0;
}