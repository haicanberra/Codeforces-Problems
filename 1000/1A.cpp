#include <iostream>
using namespace std;

int main()
{
    long long int n, m, a;
    cin >> n >> m >> a;

    long long int c = 0, d = 0;
    if (n % a != 0)
    {
        c = n / a + 1;
    }
    else
    {
        c = n / a;
    }
    if (m % a != 0)
    {
        d = m / a + 1;
    }
    else
    {
        d = m / a;
    }

    cout << c * d;

    return 0;
}