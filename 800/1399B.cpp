#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int a, n, mina, minb;
    long long int temp = 0;
    vector<long int> a1, b1, d;
    while (t--)
    {
        cin >> n;
        temp = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            a1.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            b1.push_back(a);
        }

        mina = *min_element(a1.begin(), a1.end());
        minb = *min_element(b1.begin(), b1.end());
        // cout << mina << " " << minb << endl;
        for (int i = 0; i < n; i++)
        {
            a1[i] -= mina;
            b1[i] -= minb;
        }

        for (int i = 0; i < n; i++)
        {
            d.push_back(min(a1[i], b1[i]) + abs(a1[i] - b1[i]));
        }
        for (int i = 0; i < n; i++)
        {
            temp += d[i];
        }
        cout << temp << endl;

        d.clear();
        a1.clear();
        b1.clear();
    }

    return 0;
}
