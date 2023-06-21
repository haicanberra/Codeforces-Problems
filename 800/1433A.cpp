#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    string x;
    int n,f,sum=0;
    while (t--) {
        sum=0;
        cin >> x;
        n = x.length();
        f = x[0] - '0';

        for (int i=1; i<=n;i++) {
            sum += i;
        }
        cout << 10*(f-1) + sum << endl;

    }

    return 0;
}