#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0, t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        sum += t;
    }
    long double a = (long double)sum / (long double)n;
    cout << fixed;
    cout << setprecision(12);
    cout << a;
    return 0;
}