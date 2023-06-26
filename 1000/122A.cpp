#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;

    bool unluck = false;
    for (char c : n)
    {
        if (c != '4' && c != '7')
        {
            unluck = true;
            break;
        }
    }
    if (unluck) {
        
    }
    cout << "YES";
    return 0;
}