#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;cin>>t;
    int n,m,x,y,c,one,two,sum=0;
    vector<char>a;
    char b;
    while(t--){
        cin >>n>>m>>x>>y;
        one=0;
        two=0;
        sum=0;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                cin >> b;
                a.push_back(b);
            }
            a.push_back('/');
        }
        for (int i = 0; i<a.size()-1;i++){
            if (a[i] == a[i+1] && a[i] == '.') {
                two++;
                i++;
            }
            else if (a[i] == '.'){
                one++;
            }
        }
        // cout << one << " " << two << endl;
        // if (n*m==1){
        //     cout << x << endl;
        //     a.clear();
        //     continue;
        // }
        // cout << star << " " << dot << endl;
        if (x*2 < y){
            c=1;
        }
        else {
            c=2;
        }
        if (c==1){
            cout << (one+two*2)*x << endl;
        }
        else {
            
            cout << two*y+one*x << endl; 
        }
        a.clear();
    }

    return 0;
}