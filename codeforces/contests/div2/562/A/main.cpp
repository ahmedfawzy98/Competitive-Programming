#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a, x, b, y;
    while (cin >> n >> a >> x >> b >> y){
        while (a != x and b != y and a != b){
            ++a;
            if (a > n) a = 1;
            b--;
            if (!b) b = n;
        }
        cout << (a == b ? "YES": "NO") << endl;
    }
    return 0;
}