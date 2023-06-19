#include <iostream>
using namespace std;

int main()
{
    int n, a, b = 0, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        b += a;
        if (b < 0)
        {
            b=0;
            count++;
        }
    }
    cout << count;
    return 0;
}