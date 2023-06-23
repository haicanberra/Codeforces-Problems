#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, b, min = 99999;
    vector<int> a;
    while (t--)
    {
        cin >> n;
        while (n--)
        {
            cin >> b;
            a.push_back(b);
        }
        sort(a.begin(), a.end());
        for (int i = 1; i < a.size(); i++)
        {
            if (a[i] - a[i - 1] < min)
            {
                min = a[i] - a[i - 1];
            }
        }
        cout << min << endl;
        a.clear();
        min = 99999;
    }

    return 0;
}