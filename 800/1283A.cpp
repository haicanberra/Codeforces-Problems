#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int hh, mm, hl, ml;
    while (t--)
    {
        cin >> hh >> mm;
        ml = 60 - mm;
        hl = 23 - hh;
        cout << ml + hl * 60 << endl;
    }

    return 0;
}