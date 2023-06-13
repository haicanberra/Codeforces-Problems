#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a;
    int b;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        a.push_back(b);
    }
    int max = *max_element(a.begin(), a.end());
    int min = *min_element(a.begin(), a.end());
    int ma = find(a.begin(), a.end(), max) - a.begin();
    int mi = find(a.begin(), a.end(), min) - a.begin();
    for (int i = 0; i< n; i++)   {
        if (a[i]==min) {
            mi = i;
        }
    }
    if (ma > mi)
    {
        cout << ma + a.size() - 1 - mi - 1;
    }
    else
    {
        cout << ma + a.size() - 1 - mi;
    }
    return 0;
}