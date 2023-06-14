#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a,d;
    int count=0,b,c;
    for (int i=0;i<n;i++){
        cin >> b >> c;
        a.push_back(b);
        d.push_back(c);
    }
    for (int i = 0; i<n; i ++){
        for (int j = 0; j < n; j++){
            if (i!=j && a[i]==d[j]){
                count++;
            }
        }
    }
    cout << count;

    return 0;
}