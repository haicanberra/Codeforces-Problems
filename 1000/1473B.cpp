#include <iostream>
#include <string>
#include <numeric>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int q, x;
    cin >> q;
    string s, t, a, b;

    while (q--)
    {
        cin >> s >> t;
        a = s;
        b = t;
        int y = s.length();
        int z = t.length();
        x = lcm(y, z);

        while (y < x)
        {
            s += a;

            y = s.length();
        }
        while (z < x)
        {
            t += b;
            z = t.length();
        }

        if (t != s)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}
