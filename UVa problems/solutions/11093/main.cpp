#include <iostream>

using namespace std;

int main() {
    int t, n, counter = 1;
    cin>>t;
    while(t--){
        cin>>n;
        int p[n],q[n],fuel, pos;
        bool check = false;
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> q[i];
        }
        for (int j = 0; j < n; ++j) {
            pos = j;
            fuel = p[pos];
            if(fuel < q[pos]){
                continue;
            }
            while(fuel >= q[pos]){
                fuel -= q[pos];
                pos = (pos + 1) % n;
                fuel += p[pos];
                if(pos == j){
                    check = true;
                    break;
                }
            }
            if(!check){
                if(pos < j){
                    j = n;
                }
                else{
                    j = pos;
                }
            }
            else{
                cout << "Case " << counter++ << ": ";
                cout << "Possible from station " << j+1 << endl;
                break;
            }
        }
        if(!check){
            cout << "Case " << counter++ << ": ";
            cout << "Not possible" << endl;
        }
    }
    return 0;
}