#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    int x, y, xoff, yoff, dist;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a;
            if (a == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    xoff = abs(x - 2);
    yoff = abs(y - 2);
    dist = xoff + yoff;
    cout << dist;
    return 0;
}