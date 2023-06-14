#include <iostream>
#include <string>
using namespace std;

int toggle(int alt)
{
    if (alt == 0)
    {
        return 1;
    }
    if (alt == 1)
    {
        return 0;
    }
    return 0;
}
int main()
{
    int a, b;
    cin >> a >> b;

    string c = "";
    int alt = 0;
    for (int i = 0; i < a; i++)
    {
        c = "";
        for (int j = 0; j < b; j++)
        {
            if (i % 2 == 0)
            {
                c += "#";
            }
            else
            {
                if (alt == 0)
                {
                    if (j != b - 1)
                    {
                        c += ".";
                    }
                    else
                    {
                        c += "#";
                    }
                }
                else
                {
                    if (j != 0)
                    {
                        c += ".";
                    }
                    else
                    {
                        c += "#";
                    }
                }
            }
        }
        if (i % 2 != 0)
        {
            alt = toggle(alt);
        }

        cout << c << endl;
    }

    return 0;
}
