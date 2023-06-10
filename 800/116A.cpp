#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    int capacity = 0, min = 0;
    cin >> n;
    for (int i =0 ; i<n;i++){
        cin >> a >> b;
        capacity = capacity - a + b;
        if (capacity > min) {
            min = capacity;
        }
    }
    cout << min;

    return 0;
}