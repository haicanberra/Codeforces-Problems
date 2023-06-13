#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    vector<int> a = {k, l, m, n};
    int count = 0;
    for (int i = 1; i < d + 1; i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (i % a[j] == 0)
            {
                count++;
                break;
            }
        }
    }
    cout << count;
    return 0;
}