#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> e = {a, b, c, d};
    sort(e.begin(), e.end());

    cout << e[3] - e[2] << " " << e[3] - e[1] << " " << e[3] - e[0];

    return 0;
}