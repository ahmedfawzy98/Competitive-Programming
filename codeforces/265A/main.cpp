#include <bits/stdc++.h>
using namespace std;
int main() {
    string s,t;
    while (cin >> s >> t){
        int position = 0, n = s.length();
        for (int i = 0; i < t.length(); ++i) {
            if(t[i] == s[position] and position + 1 != n){
                position++;
            }
        }
        cout << position + 1 << endl;
    }
    return 0;
}