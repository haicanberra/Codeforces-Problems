#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {   
    int     n,t;cin>>n;
    vector<int>a;
    while(n--){
        cin >> t;
        a.push_back(t);
    }
    sort(a.begin(),a.end());
    for (int i=0; i<a.size()-2; i++){
        if ((a[i]+a[i+1])>a[i+2]){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}