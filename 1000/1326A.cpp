#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    string result = "2";
    bool exist = false;
    while (t--)
    {
        cin >> n;
        if (n == 1)
        {
            exist = false;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {

                result += '3';
            }
            exist = true;
        }
        if (exist)
        {
            cout << result << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        result = "2";
    }

    return 0;
}