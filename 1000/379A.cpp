#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int h = a, left = 0;
    while (a >= b)
    {
        h += a / b;
        left += a % b;
        a = a / b;
        if (a < b && left >= b)
        {
            a = left + a % b;
            left = 0;
        }
        if (a + left - b >= 0)
        {
            a += left;
            left = 0;
        }
    }
    cout << h;
    return 0;
}