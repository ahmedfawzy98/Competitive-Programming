#include <iostream>
using namespace std;
int main() {
    int t,n,tmp,v=0,c=1;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i = 0 ; i < n ; ++i){
            cin>>tmp;
            v = max(v,tmp);
        }
        cout << "Case " << c++ << ": " << v << endl;
        v = 0;
    }
    return 0;
}