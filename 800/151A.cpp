#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int toast_liters = k*l/nl;
    int toast_lime = c*d;
    int toast_salts = p/np;
    cout << min(toast_lime, min(toast_liters, toast_salts))/n;
}