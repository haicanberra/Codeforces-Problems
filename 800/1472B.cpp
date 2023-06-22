#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    int a;
    vector<int> m = {0}, l = {0}, z;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            z.push_back(a);
        }
        sort(z.begin(), z.end(), greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (reduce(m.begin(), m.end()) < reduce(l.begin(), l.end()))
            {
                m.push_back(z[i]);
            }
            else
            {
                l.push_back(z[i]);
            }
        }
        if (reduce(m.begin(), m.end()) == reduce(l.begin(), l.end()))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        z.clear();
        m.clear();
        l.clear();
    }
}