#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t = 0, m = n - 1;
    t = n;
    while (m > 0)
    {
        n--;
        t += n * (n + 1) / 2;
        m--;
    }
    cout << t;

    return 0;
}