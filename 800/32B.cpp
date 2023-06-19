#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cin >> a;

    string temp, result = "";
    for (char c : a)
    {
        temp.push_back(c);
        if (temp[0] == '.')
        {
            result.push_back('0');
            temp = "";
        }
        if (temp.length() == 2)
        {
            if (temp == "--")
            {
                result.push_back('2');
            }
            else if (temp == "-.")
            {
                result.push_back('1');
            }
            temp = "";
        }
    }
    cout << result;
    return 0;
}