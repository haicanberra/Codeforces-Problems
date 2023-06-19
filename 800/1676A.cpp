#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string a, b = "", c = "";
    int i, sum1=0, sum2=0, num1,num2;
    while (t--)
    {
        cin >> a;
        i = 0;
        sum1=0;
        sum2=0;
        for (char d : a)
        {
            if (i > 2)
            {
                c += d;
            }
            else
            {
                b += d;
            }
            i++;
        }
        num1 = stoi(b);
        num2 = stoi(c);
        for (int j =0; j < 3; j++) {
            sum1 += num1 % 10;
            num1 = num1 / 10;
            sum2 += num2 % 10;
            num2 = num2 / 10;
        }
        

        if (sum1 == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        b = "";
        c = "";
    }

    return 0;
}