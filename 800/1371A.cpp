#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int k;
    while (n--)
    {
        cin >> k;
        if (k % 2 == 0)
        {
            cout << k / 2 << endl;
        }
        else
        {
            cout << (k - 1) / 2 + 1 << endl;
        }
    }

    return 0;
}