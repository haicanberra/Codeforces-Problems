#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<int> a = {1, 2, 4, 5, 7, 8, 10, 11, 14, 16};

    int k, temp;
    for (int i = 0; i < t; i++)
    {
        cin >> k;
        if (k > a.size())
        {
            temp = a[a.size() - 1];
            while (k > a.size())
            {
                temp += 1;
                if (temp % 3 == 0 || temp % 10 == 3)
                {
                    cout << "";
                }
                else
                {
                    a.push_back(temp);
                }
            }
        }
        
        cout << a[k - 1] << endl;
    }
    // for (int j = 0; j < a.size(); j++)
    // {
    //     cout << a[j] << " ";
    // }
    // return 0;
}