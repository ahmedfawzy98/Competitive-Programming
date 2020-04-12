#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n){
        int p = 0, m = 0, sp = 0, tmp;
        map<int,vector<int>> s;
        for (int i = 1; i <= n; ++i) {
            cin >> tmp;
            s[tmp].emplace_back(i);
            if (tmp == 1) p++;
            else if (tmp == 2) m++;
            else{sp++;}
        }
        int x = min(p, m);
        x = min(x, sp);
        cout << x << endl;
        if (x){
            for (int i = 0; i < x; ++i) {
                cout << s[1][i] << " " << s[2][i] << " " << s[3][i] << endl;
            }
        }
    }
    return 0;
}