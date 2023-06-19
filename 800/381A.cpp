#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a;
    int b, s = 0, d = 0, player = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        a.push_back(b);
    }
    while (a.size() != 0)
    {
        if (a[0] >= a[a.size() - 1])
        {
            if (player == 0)
            {
                s += a[0];
                a.erase(a.begin());
                player = 1;
                continue;
            }
            else
            {
                d += a[0];
                a.erase(a.begin());
                player = 0;
                continue;
            }
        }
        else
        {
            if (player == 0)
            {
                s += a[a.size() - 1];
                a.pop_back();
                player = 1;
                continue;
            }
            else
            {
                d += a[a.size() - 1];
                a.pop_back();
                player = 0;
                continue;
            }
        }
    }
    cout << s << " " << d;
    return 0;
}