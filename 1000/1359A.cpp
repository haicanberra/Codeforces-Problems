#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, m, k;
    while (t--)
    {
        cin >> n >> m >> k;
        int tmp = n / k, score = 0;
        if (m == 0)
        {
            cout << 0 << endl;
            continue;
        }
        if (tmp >= m)
        {
            cout << m << endl;
            continue;
        }
        else
        {
            int i;
            for (i = 0; i < k - 1; i++)
            {
                m--;
            }
            i = 1;
            while (m > tmp)
            {
                m -= k - 1;
                i++;
            }
            cout << tmp - i << endl;
        }
    }

    return 0;
}