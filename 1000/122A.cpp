#include <iostream>
#include <string>
using namespace std;

int check(string n)
{
    for (char c : n)
    {
        if (c != '4' && c != '7')
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string n;
    cin >> n;

    if (check(n) == 0)
    {
        for (int i = 0; i < stoi(n); i++)
        {
            if (check(to_string(i)) == 1)
            {
                if (stoi(n) % i == 0)
                {
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    else
    {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}