#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, parity = 0, a, o, e;
    while (t--)
    {
        cin >> n;
        parity = 0;
        o = 0;
        e = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a % 2 != i % 2)
            {
                parity++;
                if (a % 2 == 0)
                {
                    e++;
                }
                else
                {
                    o++;
                }
            }
        }

        if (parity % 2 == 0 && o == e)
        {
            cout << parity / 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}