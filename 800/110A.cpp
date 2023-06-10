#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int i = 0;
    for (char c : n)
    {
        if (c == '4' || c == '7')
        {
            i++;
        }
    }
    if (i == 4 || i == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}