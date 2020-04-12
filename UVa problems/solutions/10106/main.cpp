#include <bits/stdc++.h>
using namespace std;

const int SIZE = 1000;

int main() {
    string s1, s2;
    int res[SIZE];
    while (cin >> s1){
        cin >> s2;
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        memset(res, 0, sizeof(res));
        for (int i = 0; i < s1.length(); ++i) {
            for (int j = 0; j < s2.length(); ++j) {
                res[i + j] += (s1[i] - '0') * (s2[j] - '0');
            }
        }

        for (int k = 0; k < SIZE - 1; ++k) {
            res[k + 1] += res[k] / 10;
            res[k] %= 10;
        }

        int i = SIZE - 1;
        while(i > 0 && res[i] == 0) i--;
        for(; i >= 0; i--) cout << res[i];
        cout << endl;
    }
    return 0;
}