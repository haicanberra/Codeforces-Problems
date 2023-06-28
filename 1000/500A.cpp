#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, t, temp;
    cin >> n >> t;
    vector<int> a;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    int current = 1;
    for (int i = 0; i < n - 1; i++)
    {
        current += a[i];
        i = current - 2;
        if (current == t)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}