#include <iostream>
using namespace std;

int main() {

    int t;
    cin >>t ;
    int n,count=0,off;
    char c;
    while (t--) {
        cin >> n;
        count=0;
        off=0;
        for (int i=0; i<n;i++){
            cin >> c;
            if (c == ')') {
                count--;
            }
            else {
                if (count >= 0) {
                    count++;
                }
                else {
                    off++;
                    count =1;
                }
                
            }
        }
        cout << abs(count) << endl;
    }

    return 0;
}