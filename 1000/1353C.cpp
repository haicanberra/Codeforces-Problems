#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int n, sum = 0;
    while (t--)
    {
        cin >> n;
        n = n / 2;
        sum = 8 * ((n) * (n + 1) * (2 * n + 1)) / 6;
        cout << sum << endl;
    }
    return 0;
}