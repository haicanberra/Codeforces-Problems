#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string a = "codeforces";

    char b;
    bool found = false;
    while (t--)
    {
        cin >> b;
        found = false;
        for (char c : a)
        {
            if (b == c)
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}