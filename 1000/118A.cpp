#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cin >> a;

    string b = "";
    for (char c : a)
    {
        c = tolower(c);
        if (c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i')
        {
            b += '.';
            b += c;
        }
    }
    cout << b;

    return 0;
}