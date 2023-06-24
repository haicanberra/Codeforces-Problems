#include <iostream>
using namespace std;

int main()
{
    int n, m, c;
    cin >> n >> m;
    c = m;
    char b = '0';
    while (n--)
    {
        m = c;
        while (m--)
        {
            cin >> b;
            if (b == 'C' || b == 'M' || b == 'Y')
            {
                cout << "#Color";
                return 0;
            }
        }
    }
    cout << "#Black&White";
    return 0;
}
