#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<char> appeared = {'.'};
    string a;
    int t;
    cin >> t;

    int n;
    bool found = false, sus = false;
    while (t--)
    {
        cin >> n >> a;

        sus = false;
        for (char c : a)
        {
            found = false;
            for (int i = 0; i < appeared.size(); i++)
            {
                if (appeared[i] == c)
                {
                    found = true;
                }
            }
            if (found == false)
            {
                appeared.push_back(c);
            }
            else
            {
                if (appeared[appeared.size() - 1] != c)
                {
                    sus = true;
                }
            }
        }
        if (sus)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        appeared.clear();
    }

    return 0;
}