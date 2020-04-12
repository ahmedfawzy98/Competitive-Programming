#include <iostream>
using namespace std;
int main() {
    int t =0,n,m,p;
    string tmp;
    while(cin>>n){
        string names[n];
        int money[n];
        if(t++){cout<<endl;}
        for (int i = 0; i <n ; ++i) {
            cin>>names[i];
            money[i] = 0;
        }
        for (int j = 0; j <n ; ++j) {
            cin>>tmp>>m>>p;
            if(!p){ continue;}
            for (int l = 0; l <n ; ++l) {
                if(names[l] == tmp){
                    money[l] -= (m/p)*p;
                    break;
                }
            }
            for (int i = 0; i <p ; ++i) {
                cin>>tmp;
                for (int k = 0; k <n ; ++k) {
                    if(names[k] == tmp){
                        money[k] += (m/p);
                        break;
                    }
                }
            }
        }
        for (int i1 = 0; i1 < n; ++i1) {
            cout<<names[i1]<<" "<<money[i1]<<endl;
        }
    }
    return 0;
}