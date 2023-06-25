#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, count = 0, o = 0;
    int len;
    string temp;
    vector<long long int> l = {
        1,
        11,
        111,
        1111,
        11111,
        111111,
        1111111,
        11111111,
        111111111,
        1111111111};

    while (t--)
    {
        cin >> n;
        count = 0;
        len = to_string(n).length();
        count += (len - 1) * 9;
        o = n / l[len - 1];
        if (n - o * l[len - 1] >= 0)
        {
            count += o;
        }
        else
        {
            count += o - 1;
        }
        cout << count << endl;
    }
    return 0;
}