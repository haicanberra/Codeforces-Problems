#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int t_left = 240 - k;
    int t_total = 0, i;
    for (i = 1; i < n + 1; i++)
    {
        if (t_total + i * 5 > t_left)
        {
            break;
        }
        t_total += i * 5;
    }
    cout << i-1;
    return 0;
}