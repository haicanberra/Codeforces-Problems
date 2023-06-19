#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;

    int j;
    for (int i = 0; i < n; i++)
    {
        cin >> j;
        if (j <= 5 - k)
        {
            a.push_back(j);
        }
    }
    cout << a.size() / 3;
    return 0;
}