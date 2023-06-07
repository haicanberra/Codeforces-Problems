#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, k;
    int a, c, threshold;
    c = 0;
    cin >> n >> k;
    threshold = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (i == k)
        {
            threshold = a;
        }
        if ((a > 0) && (a >= threshold))
        {
            c++;
        }
    }
    cout << c;
    return 0;
}