#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, a = 2, b = 1, sume = 0, sumo = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        a = 2;
        b = 1;
        sume = 0;
        sumo = 0;
        if (n % 4 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int j = 0; j < n / 2; j++)
            {
                cout << a << " ";
                sume += a;
                a += 2;
            }
            for (int j = 0; j < n / 2 - 1; j++)
            {
                cout << b << " ";
                sumo += b;
                b += 2;
            }
            cout << sume - sumo << endl;
        }
    }

    return 0;
}