#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    unsigned long long int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n / 2;
    }
    else
    {
        signed long long int a = n / 2 - n;
        cout << a;
    }

    return 0;
}