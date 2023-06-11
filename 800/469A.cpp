#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<int> a;
    int p, t;

    for (int i = 0; i < 2; i++)
    {
        cin >> p;
        for (int j = 0; j < p; j++)
        {
            cin >> t;
            a.insert(t);
        }
    }

    if (a.size() != n)
    {
        cout << "Oh, my keyboard!";
    }
    else
    {
        cout << "I become the guy.";
    }
    return 0;
}