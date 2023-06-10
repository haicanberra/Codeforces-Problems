#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int m = n;
    for (int i = 1; i <= w; i++){
        m = m-i*k;
    }
    if (m >=0) {
        cout << 0;
    }
    else{
    cout << abs(m);
    }
    return 0;
}