#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> a;
    string b, t;
    int c;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        for (int j = 0; j < b.length(); j++)
        {
            if (b[j] != '0')
            {
                t = b[j] + string((b.length() - 1 - j), '0');
                a.push_back(t);
            }
        }
        cout << a.size() << endl;
        for (int j = 0; j < a.size(); j++)
        {
            if (j != a.size() - 1)
            {
                cout << a[j] << " ";
            }
            else
            {
                cout << a[j] << endl;
            }
        }
        a.clear();
    }

    return 0;
}