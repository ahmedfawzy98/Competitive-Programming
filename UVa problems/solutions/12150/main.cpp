#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,tmp;
    while(cin>>n,n){
        vector<int> c,p,f(n,0);
        bool check = true;
        for (int i = 0; i < n; ++i) {
            cin>>tmp;
            c.push_back(tmp);
            cin>>tmp;
            p.push_back(tmp);
        }
        for (int j = 0; j < n; ++j) {
            if((j+p[j]) >= n || (j+p[j]) < 0){
                check = false;
                break;
            }
            if(f[j+p[j]]){
                check = false;
                break;
            }
            f[j+p[j]] = c[j];
        }
        if(!check){
            cout << -1 << endl;
        }
        else{
            cout << f[0];
            for (int i = 1; i < n; ++i) {
                cout << " " << f[i];
            }
            cout << endl;
        }
    }
    return 0;
}
