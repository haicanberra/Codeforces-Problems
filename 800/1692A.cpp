#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int c;
    cin >> c;
    vector<int> a;
    int m, n, p, q, temp, index, result;
    for (int i = 0; i < c; i++)
    {
        cin >> m >> n >> p >> q;
        a.push_back(m);
        a.push_back(n);
        a.push_back(p);
        a.push_back(q);
        temp = m;
        sort(a.begin(), a.end());
        for (int j = 0; j < 4; j++)
        {
            if (temp == a[j])
            {
                index = j;
                break;
            }
        }
        result = a.size() - index - 1;
        cout << result << endl;
        a.clear();
    }

    return 0;
}