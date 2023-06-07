#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    int list[100];
    cin >> a;
    int d = 0, i = 0;
    for (char &c : a)
    {
        if (d % 2 == 0)
        {
            list[i] = c - '0';
            i++;
            d++;
        }
        else if (d % 2 != 0)
        {
            d++;
        }
    }
    sort(list, list + i);
    bool first = false;
    for (int j = 0; j < i; j++)
    {
        if (first == false)
        {
            cout << list[j];
            first = true;
        }
        else
        {
            cout << "+" << list[j];
        }
    }

    return 0;
}