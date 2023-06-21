#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string e;
    cin >> e;

    int cal = 0, temp;
    for (char f : e)
    {
        temp = f - '0';
        switch (temp)
        {
        case 1:
            cal += a;
            break;
        case 2:
            cal += b;
            break;
        case 3:
            cal += c;
            break;
        case 4:
            cal += d;
            break;
        }
    }
    cout << cal;
    return 0;
}