#include <iostream>
#include <set>
using namespace std;
;

int main()
{

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    set<int> e;
    e.insert(a);
    e.insert(b);
    e.insert(c);
    e.insert(d);

    cout << 4 - e.size();

    return 0;
}