#include <iostream>
#include <string>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
    string a;
    list<char> b = {};
    bool have;
    cin >> a;
    for (char c : a)
    {
        have = false;
        for (char d : b)
        {
            if (c == d)
            {
                have = true;
            }
        }
        if (have == false)
        {
            b.push_back(c);
        }
    }
    if (b.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}