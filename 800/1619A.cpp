#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string a, b = "", c = "";
    while (t--)
    {
        cin >> a;
        if (a.length() % 2 == 0)
        {
            for (int i = 0; i < a.length() / 2; i++)
            {
                b += a[i];
            }
            for (int i = a.length() / 2; i < a.length(); i++)
            {
                c += a[i];
            }
            // cout << b << " " << c << endl;
            if (b == c)
            {

                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
        b = "";
        c = "";
    }

    return 0;
}