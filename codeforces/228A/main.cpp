#include <bits/stdc++.h>
using namespace std;
int main() {
    map<int,int> m;
    int tmp;
    for (int i = 0; i < 4; ++i) {
        cin >> tmp;
        m[tmp] = 0;
    }
    cout << 4 - m.size() << endl;
    return 0;
}