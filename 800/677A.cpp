#include <iostream>
using namespace std;

int main()
{

    int n, h;
    cin >> n >> h;

    int min = 0, a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > h)
        {
            min = min + 2;
        }
        else
        {
            min++;
        }
    }
    cout << min;

    return 0;
}