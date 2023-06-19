#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int x, y, n, a;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> n;
        a = (n - y) / x;
        cout << a * x + y << endl;
    }

    return 0;
}