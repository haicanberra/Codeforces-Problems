#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    string c = a + b;
    string d;
    cin >> d;

    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    if (d.compare(c) != 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}