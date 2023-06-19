#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int a, b, c, temp;
    // vector<int> d;
    // for (int i = 0; i < t; i++)
    // {
    //     cin >> a >> b >> c;
    //     d.push_back(a);
    //     d.push_back(b);
    //     d.push_back(c);
    //     sort(d.begin(), d.end());

    //     if (d[0] + d[1] == d[2])
    //     {
    //         cout << "YES" << endl;
    //     }
    //     else
    //     {
    //         cout << "NO" << endl;
    //     }
    //     d.clear();
    // }
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;

        temp = max(a, max(b, c));
        if ((float)(a + b + c) / 2 == (float)temp)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}