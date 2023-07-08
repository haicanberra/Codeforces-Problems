#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; cin>>n;
    int total=0;
    if ((n*3) % 6==0) {
        total = pow(2,(n*3)/6);
        cout << total;
    }
    else {
        cout << 0;

    }

    return 0;
}