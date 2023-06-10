#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, t;
    string a;
    cin >> n >> t >> a;
    char d = a[0];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < a.length(); j++)
        {
            if (a[j] == 'B' && a[j + 1] == 'G')
            {
                a[j] = 'G';
                a[j + 1] = 'B';
                j = j + 1;
            }
        }
    }
    cout << a;
    return 0;
}