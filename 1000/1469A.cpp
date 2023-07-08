#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;cin>>n;
    string a;
    int s,t,u,f=0;
    while (n--){
        cin >>a;
        if (a.length()%2==0 && a[0]!=')' && a[a.length()-1]!='('){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
        // cout << s<<" "<<t<<" "<<u << endl;
    }

    return 0;
}