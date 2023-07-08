#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int m, move = 0;
        vector<int> sume(3);
        
        for (int i = 0; i < n; i++) {
            cin >> m;
            sume[m % 3]++;
        }
        
        while (*min_element(sume.begin(), sume.end()) != n / 3) {
            for (int i = 0; i < 3; i++) {
                if (sume[i] > n / 3) {
                    sume[i]--;
                    sume[(i + 1) % 3]++;
                    move++;
                }
            }    
        }
        
        cout << move << endl;
    }

    return 0;
}
