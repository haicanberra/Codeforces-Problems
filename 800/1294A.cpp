#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, a, b, c, ta, tb, tc;
    while (t--)
    {

        cin >> a >> b >> c >> n;
        ta = max(a, max(b, c)) - a;
        tb = max(a, max(b, c)) - b;
        tc = max(a, max(b, c)) - c;
        if (n < (ta + tb + tc))
        {
            cout << "NO" << endl;
        }
        else if (n == (ta + tb + tc))
        {
            cout << "YES" << endl;
        }
        else if ((n > (ta + tb + tc)))
        {
            n = n - (ta + tb + tc);
            if (n % 3 != 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}