#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    long long int time = 0, yob;
    vector<int> y;
    for (int i = 0; i < m; i++)
    {
        cin >> yob;
        y.push_back(yob);
    }
    int ai = 1, i = 0;
    while (i < m)
    {
        if (ai != y[i])
        {
            if (ai > y[i])
            {
                time += n - ai + y[i];
            }
            else
            {
                time += y[i] - ai;
            }
            ai = y[i];
        }
        i++;
    }
    cout << time;
    return 0;
}