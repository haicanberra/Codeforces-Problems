#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p1, p2, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p1 >> p2;

        if (p1 > p2) {
            count1++;
        }
        else if (p1 < p2)   {
            count2++;
        }   
    }

    if (count1 > count2) {
        cout << "Mishka";
    }
    else if (count1 < count2) {
        cout << "Chris";
    }
    else if (count1 == count2) {
        cout << "Friendship is magic!^^";
    }

}