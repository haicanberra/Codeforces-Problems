#include <iostream>
#include <string>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
    int n, j = 0;

    // string a;
    // cin >> n >> a;
    // for (int i = 1; i < n; i++)
    // {
    //     if (a[i] == a[i - 1])
    //     {
    //         j++;
    //     }
    // }
    char a, b;
    cin >> n >> a;
    for (int i = 0; i < n-1; i++)
    {
        cin >> b;
        if (a == b)
        {
            j++;
        }
        a = b;
    }
    cout << j;
    return 0;
}