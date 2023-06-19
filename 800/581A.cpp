#include <iostream>
using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b;
    if (a <= b)
    {
        cout << a << " ";
        t = b - a;
    }
    else if (a > b)
    {
        cout << b << " ";
        t = a - b;
    }
    cout << t / 2;
    return 0;
}