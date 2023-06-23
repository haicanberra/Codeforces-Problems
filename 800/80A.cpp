#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    bool found = false;
    if (n == 2 && m == 3)
    {
        cout << "YES";
    }
    else if (n == 2 && m != 3)
    {
        cout << "NO";
    }
    else
    {
        while (found == false)
        {
            n++;
            if (n>7)
            {if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0)
            {
                break;
            }}
            else {
            if (n == 2 || n == 3 || n == 5 || n == 7){
                break;
            }
            }
        }
        if (n == m)
        {

            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    return 0;
}