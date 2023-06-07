#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    for (char &c : a)
    {
        c = std::tolower(c);
    }
    for (char &c : b)
    {
        c = std::tolower(c);
    }
    if (a < b)
    {
        cout << -1;
    }
    else if (a == b)
    {
        cout << 0;
    }
    else if (a > b)
    {
        cout << 1;
    }
    return 0;
}