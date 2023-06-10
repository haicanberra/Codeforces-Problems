#include <iostream>
using namespace std;

int main()
{

    string y;
    cin >> y;
    int n = stoi(y);
    n = n + 1;
    y = to_string(n);

    while (1)
    {
        if (y[0] != y[1] && y[0] != y[2] && y[0] != y[3] && y[1] != y[2] && y[1] != y[3] && y[2] != y[3])
        {
            break;
        }
        else
        {
            n = n + 1;
            y = to_string(n);
        }
    }
    cout << n;
    return 0;
}