#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a, sum;
    vector<int> b;
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
        for (int i = 0; i < n / 2; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        cout << (n - 3) / 2 + 1 << endl;
        cout << 3 << " ";
        for (int i = 0; i < (n - 3) / 2; i++)
        {
            cout << 2 << " ";
        }
    }

    return 0;
}