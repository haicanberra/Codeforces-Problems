#include <iostream>
using namespace std;

int main(){
    unsigned long long int t,a,b,n,S; cin>>t;
    while (t--) {
        cin >> a>>b>>n>>S;
        if (S%n<=b && a*n+b>=S){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;  
        }
    }
    return 0;
}