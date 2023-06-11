#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    int a, b, c;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a < b)
        {
            cout << b - a << endl;
        }
        else if (a == b)
        {
            cout << 0 << endl;
        }
        else
        {
            if (a % b == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                c = a / b;
                cout << abs(a - (c + 1) * b) << endl;
            }
        }
    }

    return 0;
}