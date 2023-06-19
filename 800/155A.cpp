#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int s, min = 0, max = 0, t, count = 0;
    cin >> s;
    min = s;
    max = s;
    if (n == 1)
    {
        cout << 0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            if (t < min)
            {
                count++;
                min = t;
            }
            else if (t > max)
            {
                count++;
                max = t;
            }
        }
        cout << count;
    }
    return 0;
}