#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    while (cin >> s){
        int sum = 0, start = 'a';
        for (auto i : s){
            sum += min(abs(start - i), 26 - abs(start - i));
            start = i;
        }
        cout << sum << endl;
    }
    return 0;
}