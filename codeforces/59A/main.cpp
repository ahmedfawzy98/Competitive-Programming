#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    while (cin >> s){
        int counteru = 0, counterl = 0;
        for (auto i : s){
            isupper(i) ? counteru++: counterl++;
        }
        counteru > counterl? transform(s.begin(), s.end(), s.begin(),::toupper):
        transform(s.begin(), s.end(), s.begin(),::tolower);
        cout << s << endl;
    }
    return 0;
}