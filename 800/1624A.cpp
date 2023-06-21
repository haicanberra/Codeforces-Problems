#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, b;
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
        cout << a[a.size() - 1] - a[0] << endl;
        a.clear();
    }

    return 0;
}