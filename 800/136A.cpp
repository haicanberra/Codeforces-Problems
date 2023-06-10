#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];
    int b;
    for (int i = 1; i < n + 1; i++)
    {
        cin >> b;
        a[b - 1] = i;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}