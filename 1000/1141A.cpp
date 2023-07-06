#include <iostream>
using namespace std;

int main(){
    long long int n,m,t;cin>>n>>m;
    t=m/n;
    int moves=0;
    bool found = false;
    if (m%n!=0){
        cout << -1;
        return 0;
    }
    else {
        while(t%2==0){
            t=t/2;
            moves++;
        }
        while(t%3==0){
            t=t/3;
            moves++;
        }
        if (t!=1){
            cout << -1;
            return 0;
        }
    }
    cout << moves;
    return 0;
}