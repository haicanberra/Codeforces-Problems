#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
    vector<int> a = {
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    };
    vector<char> alphabet = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
        'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
        'u', 'v', 'w', 'x', 'y', 'z'};
    int n;
    cin >> n;
    string b;
    cin >> b;
    for (char c : b)
    {
        for (int i = 0; i < alphabet.size(); i++)
        {
            if (tolower(c) == alphabet[i])
            {
                a[i] += 1;
            }
        }
    }
    bool done = true;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 0)
        {
            done = false;
        }
    }
    if (done)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}