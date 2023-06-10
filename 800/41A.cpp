#include <string>
#include <iostream>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    int i = 1;
    bool correct = true;
    for (char c : a)
    {
        if (c != b[b.length() - i])
        {
            correct = false;
            break;
        }
        i++;
    }
    if (correct)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}