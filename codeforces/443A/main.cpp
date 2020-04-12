#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    while (getline(cin, s)){
        map<char,int> m;
        for (int i = 1; i < s.length() - 1; ++i) {
            if (s[i] != ',' and s[i] != ' '){
                m[s[i]] = 0;
            }
        }
        cout << m.size() << endl;
    }
    return 0;
}