#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    string b = "hello";
    cin >> a;
    int i = 0;
    for (char c : a)
    {
        if (i == 5)
        {
            break;
        }
        if (c == b[i])
        {
            i++;
        }
    }
    if (i == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}