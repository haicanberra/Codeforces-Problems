#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, tmp;
    vector<int> a;
    while (t--)
    {
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        else if (n == 2)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            tmp = 1;
            while (tmp <= (n * n))
            {
                a.push_back(tmp);
                tmp += 2;
            }
            tmp = 2;
            while (tmp <= (n * n))
            {
                a.push_back(tmp);
                tmp += 2;
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << a[i * n + j] << " ";
                }
                cout << endl;
            }
            a.clear();
        }
    }

    return 0;
}