#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<int> a, b;
    int c, d, e, f;
    while (t--)
    {
        cin >> c >> d >> e >> f;
        a.push_back(c);
        a.push_back(d);
        a.push_back(e);
        a.push_back(f);
        sort(a.begin(), a.end());
        b.push_back(max(c, d));
        b.push_back(max(e, f));
        sort(b.begin(), b.end());
        if (b[0] == a[2] && b[1] == a[3])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        a.clear();
        b.clear();
    }

    return 0;
}