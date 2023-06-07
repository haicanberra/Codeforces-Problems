#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, x;
    x = 0;
    string input;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> input;
        if (input.find('+') != string::npos)
        {
            x++;
        }
        else if (input.find('-') != string::npos)
        {
            x--;
        }
    }
    cout << x;
    return 0;
}