#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<int> a;
    int b, c, d;
    while (t--)
    {
        cin >> b >> c >> d;
        a.push_back(b);
        a.push_back(c);
        a.push_back(d);
        sort(a.begin(), a.end());
        cout << a[1] << endl;
        a.clear();
    }

    return 0;
}