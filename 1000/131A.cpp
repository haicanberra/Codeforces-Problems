#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int l = 0, u = 0, f = 0, i = 0;
    for (char c : a)
    {
        if (c >= 'a' && c <= 'z')
        {
            l++;
            if (i == 0)
            {
                f++;
            }
        }
        else
        {
            u++;
        }
        i++;
    }
    int first = 0;
    if (l == 1 && u == a.length() - 1 && f == 1)
    {
        for (char c : a)
        {
            if (first == 0)
            {
                first = 1;
                cout << (char)toupper(c);
            }
            else
            {
                cout << (char)tolower(c);
            }
        }
    }
    else if (u == a.length())
    {
        for (char c : a)
        {

            first = 1;
            cout << (char)tolower(c);
        }
    }
    else
    {
        cout << a;
    }
    return 0;
}