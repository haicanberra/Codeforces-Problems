#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> a;

    int n, b;
    bool found = false;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> b;
            a.push_back(b);
        }
        sort(a.begin(), a.end());
        for (int j = 1; j < a.size(); j++)
        {
            if (abs(a[j] - a[j - 1]) > 1)
            {
                cout << "NO" << endl;
                found = true;
                break;
            }
        }
        if (found == false)
        {
            cout << "YES" << endl;
        }
        found = false;
        a.clear();
    }

    return 0;
}