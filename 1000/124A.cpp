#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    // int sum = 0;
    // for (int i = a; i <= n; i++)
    // {
    //     if (n - b < i)
    //     {
    //         sum++;
    //     }
    // }
    // cout << sum;
    cout << n+1-max(a + 1, n - b);
    return 0;
}