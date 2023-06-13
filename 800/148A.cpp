#include <iostream>
#include <vector>
using namespace std;

int main()  {
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    vector<int> a = {k, l, m, n};

    int count = 0;
    for (int i=0; i<d;i++){
        for (int j=0; j<a.size(); j++){
            if (a[j] > d) {
                continue;
            }
            
        }
    }
    cout << count;

    return 0;
}