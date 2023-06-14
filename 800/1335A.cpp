#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;

    long long int a;
    int temp;
    for (int i=0;i<n;i++){
        cin>>a;
        if (a%2==0){
            temp = a/2 - 1;
        }
        else {
            temp = a/2;
        }
        cout << temp<<endl;
    }
    return 0;
}