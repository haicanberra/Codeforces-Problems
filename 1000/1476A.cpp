#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, k, tmp;
    while (t--)
    {
        cin >> n >> k;
        tmp = k;
        if (k == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if (tmp < n)
        {
            int a = n / tmp;
            if (n % tmp != 0)
            {
                tmp = (a + 1) * (tmp);
            }
            else
            {
                tmp = a * tmp;
            }
        }
        cout << (int)ceil((double)tmp / (double)n) << endl;
    }

    return 0;
}