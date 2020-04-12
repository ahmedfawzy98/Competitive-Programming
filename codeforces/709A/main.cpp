#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, b, d;
    while (cin >> n >> b >> d){
        int tmp, counter = 0, empty = 0;
        for (int i = 0; i < n; ++i) {
            cin >> tmp;
            if (tmp <= b){
                counter += tmp;
            }
            if (counter > d){
                empty ++;
                counter = 0;
            }
        }
        cout << empty << endl;
    }
    return 0;
}