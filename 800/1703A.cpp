#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string s;
    for (int i = 0; i < t; i++)
    {
        cin >> s;

        // Convert the entire string to lowercase
        for (char &c : s)
        {
            c = tolower(c, locale());
        }

        if (s != "yes")
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
