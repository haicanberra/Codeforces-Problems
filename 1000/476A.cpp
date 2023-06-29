#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int n,m,a=0;
    cin >>n>>m;
    vector<int> b ={2};

    while (((n-a)/2 + a)%m!=0 ||
    (2*((n-a)/2)+a)!=n){
        a++;
    }
    if (a + (n-a)/2 <= n)
    {cout << a + (n-a)/2;}
    else {
        cout << -1;
    }
    
    return 0;
}