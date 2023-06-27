#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> d = {a + b + c,
                     a * (b + c),
                     (a + b) * c,
                     a * b * c,
                     a * b + c,
                     a + b * c};
    sort(d.begin(), d.end());
    cout << d[d.size() - 1];
    return 0;
}