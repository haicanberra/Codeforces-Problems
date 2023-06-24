#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        count += i;
        n -= count;
        if (n < 0)
        {
            break;
        }
        a += 1;
    }
    cout << a;
    return 0;
}