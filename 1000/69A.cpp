#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    vector<int> x, y, z;
    int n, a, b, c;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c;
        x.push_back(a);
        y.push_back(b);
        z.push_back(c);
    }
    if (accumulate(x.begin(), x.end(), 0) == 0 && accumulate(y.begin(), y.end(), 0) == 0 && accumulate(z.begin(), z.end(), 0) == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}