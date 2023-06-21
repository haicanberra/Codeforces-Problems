#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int a, b;

    double temp;
    int tempi;
    while (t--)
    {
        cin >> a >> b;
        // cout << pow(min(max(2 * a, b), max(2 * b, a)), 2) << endl;
        if (a == b)
        {
            cout << 4 * a * b << endl;
        }
        else if (2 * min(a, b) < max(a, b))
        {
            cout << pow(max(a, b), 2) << endl;
        }
        else
        {
            cout << pow(2 * min(a, b), 2) << endl;
        }
    }

    return 0;
}