#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    string beg, end;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        beg = a[0];
        end = a[a.length() - 1];
        for (int j = 1; j < a.length() - 1; j += 2)
        {
            beg += a[j];
        }
        cout << beg + end << endl;
    }

    return 0;
}