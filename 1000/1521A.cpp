#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int a, b;
    vector<long long int> m;
    while (t--)
    {
        cin >> a >> b;
        m.push_back(a);
        m.push_back(a * b);
        m.push_back(a * b + a);
        if ((a % (a * b) == 0 || (a * b + a) % (a * b) == 0))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << a << " " << a * b << " " << a * b + a << endl;
        }
        m.clear();
    }

    return 0;
}