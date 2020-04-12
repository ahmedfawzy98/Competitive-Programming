#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (cin >> s){
        map<char, int> m;
        for (auto i : s){
            m[i] = 0;
        }
        cout << (m.size() & 1 ?  "IGNORE HIM!" : "CHAT WITH HER!") << endl;
    }
    return 0;
}