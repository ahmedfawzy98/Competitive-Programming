#include <iostream>

using namespace std;

int main() {
    int n, p[12], r[12], counter = 1;
    while(cin>>n,n >= 0){
        for (int i = 0; i < 12; ++i) {
            cin>>p[i];
        }
        for (int i = 0; i < 12; ++i) {
            cin>>r[i];
        }
        cout << "Case " << counter++ << ":" << endl;
        for (int j = 0; j < 12; ++j) {
            if(n < r[j]){
                cout << "No problem. :(" << endl;
            }
            else{
                cout << "No problem! :D" << endl;
                n -= r[j];
            }
            n += p[j];
        }
    }
    return 0;
}