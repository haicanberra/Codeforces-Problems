#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int y = 0;
    while (1) {
        if (a > b) {
            break;
        }
        a = a * 3;
        b = b * 2;
        y++;
    }
    cout << y;
    return 0;
}