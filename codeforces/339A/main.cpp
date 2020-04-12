#include <bits/stdc++.h>
using namespace std;
int main() {
    string s, tmp;
    while (cin >> s){
        vector<char> a;
        for (auto i: s) {
            if (i != '+'){a.emplace_back(i);}
        }
        sort(a.begin(), a.end());
        int i = 0;
        for (int j = 0; j < s.length(); j += 2) {
            s[j] = a[i++];
        }
        cout << s << endl;
    }
    return 0;
}