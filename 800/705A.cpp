#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = " I hate";
    string b = " I love";
    string c = " it";
    string d = " that";

    int n;
    cin >> n;
    string temp = "";
    for (int i = 1; i < n + 1; i++)
    {
        if (i % 2 != 0)
        {
            temp += a;
        }
        else
        {
            temp += b;
        }
        if (i != n)
        {
            temp += d;
        }
    }
    temp += c;
    cout << temp;
    return 0;
}