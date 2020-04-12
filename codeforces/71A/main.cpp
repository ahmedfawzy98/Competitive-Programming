#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n){
        string s[n], tmp;
        for (int i = 0; i < n; ++i) {
            cin >> s[i];
            int length = s[i].length();
            if (length > 10){
                s[i] = s[i][0] + to_string(length - 2) + s[i][length - 1];
            }
        }
        for (int j = 0; j < n; ++j) {
            cout << s[j] << endl;
        }
    }
    return 0;
}