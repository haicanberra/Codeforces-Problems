#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, x;
    while (t--)
    {
        cin >> n >> x;
        if (n == 1 || n == 2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << ceil((float)(n - 2) / (float)x) + 1 << endl;
        }
    }

    return 0;
}