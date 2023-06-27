#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;

    vector<int> x, y;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
    }

    int index;
    while (x.size() >= 1)
    {
        index = min_element(x.begin(), x.end()) - x.begin();
        if (s <= x[index])
        {
            cout << "NO";
            return 0;
        }
        else
        {
            s += y[index];
            x.erase(x.begin() + index);
            y.erase(y.begin() + index);
        }
    }
    cout << "YES";
    return 0;
}