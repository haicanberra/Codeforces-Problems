#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a, b;
    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        t = abs(b - a);
        if (t%10 == 0){
            cout << t / 10 << endl;
        }
        else {
            cout << t / 10 +1<< endl;
        }
        
    }

    return 0;
}