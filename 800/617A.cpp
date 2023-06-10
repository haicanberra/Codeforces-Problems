#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int s = 0;
    for (int i = 5; i > 0; i--)
    {
        if (x % i != 0)
        {
            s = s + x / i;
            x = x - (x / i) * i;
        }
        else
        {
            s = s + x / i;
            break;
        }
    }
    cout << s;

    return 0;
}