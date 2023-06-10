#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int u, l;
    u = 0;
    l = 0;
    for (char c : a)
    {
        if (int(c) >= 97)
        {
            l++;
        }
        else if (int(c) >= 65 && int(c) < 97)
        {
            u++;
        }
    }
    if (u > l)
    {
        transform(a.begin(), a.end(), a.begin(), ::toupper);
    }
    else
    {
        transform(a.begin(), a.end(), a.begin(), ::tolower);
    }
    cout << a;

    return 0;
}