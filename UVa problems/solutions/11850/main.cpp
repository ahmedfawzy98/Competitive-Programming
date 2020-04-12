#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    while(cin>>n,n){
        int s[n];
        bool check = true;
        for (int i = 0; i < n; ++i) {
            cin>>s[i];
        }
        sort(s,s+n);
        if((2 * abs(s[n-1] - 1422)) > 200){
            cout << "IMPOSSIBLE" << endl;
            continue;
        }
        for (int j = 0; j < n-1 ; ++j) {
            if((s[j+1] - s[j]) > 200){
                cout << "IMPOSSIBLE" << endl;
                check = false;
                break;
            }
        }
        if(check){
            cout << "POSSIBLE" << endl;
        }
    }
    return 0;
}