#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, m, k, z, l;
    vector<int> a, b;
    while (t--)
    {
        cin >> n >> k;
        m = n;
        l = n;
        while (n--)
        {
            cin >> z;
            a.push_back(z);
        }
        while (m--)
        {
            cin >> z;
            b.push_back(z);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (k <= l)
        {
            for (int i = 0; i < k; i++)
            {
                if (a[i] < b[b.size() - i - 1])
                {
                    a[i] = b[b.size() - i - 1];
                }
            }
        }
        else
        {
            for (int i = 0; i < l; i++)
            {
                if (a[i] < b[b.size() - i - 1])
                {
                    a[i] = b[b.size() - i - 1];
                }
            }
        }
        cout << accumulate(a.begin(), a.end(), 0) << endl;
        a.clear();
        b.clear();
    }

    return 0;
}