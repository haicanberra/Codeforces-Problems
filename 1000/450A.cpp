#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a, b;
    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        b.push_back(t);
        a.push_back(i + 1);
    }

    while (a.size() != 1)
    {
        // for (int i = 0; i < b.size(); i++)
        // {
        //     if (b[i] != 0)
        //     {
        //         t = 1;
        //         break;
        //     }
        // }
        // if (t == 0)
        // {
        //     break;
        // }

        // give candy
        if (b[0] > m)
        {
            t = b[0] - m;
            b.push_back(t);
            t = a[0];
            a.erase(a.begin());
            b.erase(b.begin());
            a.push_back(t);
        }
        else
        {
            b.erase(b.begin());
            a.erase(a.begin());
        }
    }
    cout << a[0];
    return 0;
}