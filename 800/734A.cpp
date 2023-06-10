#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n, i = 0, j = 0;
    string a;
    cin >> n >> a;

    for (char c : a)
    {
        if (c == 'A')
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    if (i == j)
    {
        cout << "Friendship";
    }
    else if (i < j)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Anton";
    }

    return 0;
}