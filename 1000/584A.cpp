#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string findNumber(int n, int d)
{
    // to store answer
    string ans = "";
 
    if (d != 10) {
        ans += to_string(d);
        for (int i = 1; i < n; i++)
            ans += '0';
    }
    else {
        if (n == 1)
            ans += "-1";
        else {
            ans += '1';
            for (int i = 1; i < n; i++)
                ans += '0';
        }
    }
 
    return ans;
}

int main() {
    int n,a;
    cin >>n>>a;

    cout << findNumber(n, a);
    return 0;
}