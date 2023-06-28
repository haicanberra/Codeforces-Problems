#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string c;
    cin >> n;

    string t1, t2;
    int score1 = 0, score2 = 0;
    cin >> c;
    t1 = c;
    score1++;
    n--;
    bool once = false;
    while (n--)
    {
        cin >> c;
        if (c != t1 && once == false)
        {
            t2 = c;
            once = true;
        }
        if (t1 == c)
        {
            score1++;
        }
        else
        {
            score2++;
        }
    }
    // cout << score1 << " " << score2;
    if (score1 > score2)
    {
        cout << t1;
    }
    else
    {
        cout << t2;
    }
    return 0;
}