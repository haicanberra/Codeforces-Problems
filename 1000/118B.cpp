#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n;cin>>n;
    int num = 1,t=0;
    vector<string> a;
    for (int i=0; i< n*2+1;i++){
        for (int j =0 ; j <=num/2;j++){
            a.push_back(to_string(j));
        }
        for (int j=num/2-1;j>=0;j--){
            a.push_back(to_string(j));
        }
        while (a.size()<(n*2+1)){
            a.insert(a.begin()," ");
            a.push_back(" ");
        }
        while(a[a.size()-1]==" ") {
            a.pop_back();
        }
        if (num == n*2+1 || t==1){
            t=1;
            num -= 2;
        }
        else if (t==0){
        num += 2;}
        for (int j=0; j<a.size();j++){
            cout << a[j];
            if (j!=a.size()-1){
                cout  << " ";
            }
        }
        cout << endl;
        a.clear();
    }

    return 0;
}