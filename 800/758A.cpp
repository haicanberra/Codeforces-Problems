#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, b, total = 0;
    cin >> n;
    vector<int> a;
    if (n == 1)
    {
        cout << 0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cin >> b;
            a.push_back(b);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n - 1; i++)
        {
            total += (abs(a[i] - a[n - 1]));
        }
        cout << total;
    }

    return 0;
}