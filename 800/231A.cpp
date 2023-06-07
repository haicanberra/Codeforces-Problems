#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, c, r;
    int p, v, t;
    cin >> n;
    c = 0;
    for (int i = 0; i < n; i++)
    {

        cin >> p >> v >> t;
        // if (p - '0' + v - '0' + t - '0' >= 2)
        // {
        //     c++;
        // }
        if (p + v + t >= 2)
        {
            c++;
        }
    }
    cout << c;
    return 0;
}