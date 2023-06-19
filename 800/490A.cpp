#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int b;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        a.push_back(b);
    }
    int one = 0, two = 0, three = 0;
    vector<int> ones, twos, threes;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            one++;
            ones.push_back(i + 1);
        }
        if (a[i] == 2)
        {
            two++;
            twos.push_back(i + 1);
        }
        if (a[i] == 3)
        {
            three++;
            threes.push_back(i + 1);
        }
    }
    int min_team = min(one, min(two, three));
    cout << min_team << endl;
    for (int i = 0; i < min_team; i++)
    {
        cout << ones[ones.size() - 1] << " " << twos[twos.size() - 1] << " " << threes[threes.size() - 1] << endl;
        ones.pop_back();
        twos.pop_back();
        threes.pop_back();
    }
    return 0;
}