#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int y, w;
    cin >> y >> w;
    switch (6 - max(y, w) + 1)
    {
    case 1:
        cout << 1 << "/" << 6;
        break;
    case 2:
        cout << 1 << "/" << 3;
        break;
    case 3:
        cout << 1 << "/" << 2;
        break;
    case 4:
        cout << 2 << "/" << 3;
        break;
    case 5:
        cout << 5 << "/" << 6;
        break;
    case 6:
        cout << 1 << "/" << 1;
        break;
    }

    return 0;
}