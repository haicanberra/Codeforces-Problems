#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string n;
    cin >> n;
    string a =n;
    reverse(a.begin(),a.end());
    cout << n + a;
    return 0;
}