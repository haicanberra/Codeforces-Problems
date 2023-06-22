#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    int a, b;
    while (t--)
    {
        cin >> n;
        a = n / 3;
        b = n - 2 * a;
        while (abs(a - b) > abs((b - 2) - (a + 1)))
        {
            a++;
            b -= 2;
        }
        cout << b << " " << a << endl;
    }
}