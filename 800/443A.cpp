#include <iostream>
#include <set>

using namespace std;

int main()
{
    char temp = 'a';
    cin >> temp;

    cin >> temp;

    set<char> c;
    while (temp != '}')
    {
        if (temp != ',')
        {
            c.insert(temp);
                }
        cin >> temp;
    }
    cout << c.size();
    return 0;
}