#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int a, b, c = 1;
    cin >> a;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b;
        if (a != b)
        {
            c++;
        }
        a = b;
    }
    cout << c;

    return 0;
}