#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    vector<long long int> a = {100, 20, 10, 5, 1};

    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        while ((n - a[i]) >= 0)
        {
            count++;
            n = n - a[i];
        }
        if (n == 0)
        {
            break;
        }
    }
    cout << count;
}