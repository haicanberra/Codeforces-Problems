#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int w;
    cin >> w;
    if (w < 4)
    {
        cout << "NO";
        return 0;
    }
    else if (w % 2 == 0)
    {
        if ((w - 2) % 2 == 0)
        {
            cout << "YES";
            return 0;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    else
    {
        cout << "NO";
        return 0;
    }
    return 1;
}