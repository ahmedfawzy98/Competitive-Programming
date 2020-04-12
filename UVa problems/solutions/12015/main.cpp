#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main() {
    int t,r[10],c=1,m;
    string url[10];
    cin>>t;
    while(t--){
        m = 0;
        for (int i = 0; i < 10; ++i) {
            cin>>url[i]>>r[i];
            m = max(m,r[i]);
        }
        cout<<"Case #"<<c++<<":"<<endl;
        for (int j = 0; j < 10 ; ++j) {
            if(r[j] == m){
                cout<<url[j]<<endl;
            }
        }
    }
    return 0;
}