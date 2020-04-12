#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int n;
    while (cin >> n, n){
        string s[5];
        map<string, int> m;
        int mostPopular= -1;
        for (int i = 0; i < n; ++i) {
            cin >> s[0] >> s[1] >> s[2] >> s[3] >> s[4];
            sort(s, s + 5);
            string combination;
            for (const auto & j : s) {
                combination += j;
            }
            if (m.find(combination) == m.end()){
                m[combination] = 1;
//                mostPopular = max(mostPopular, 1);
                if (mostPopular == -1){
                    mostPopular = 1;
                }
            }else{
                m[combination] += 1;
                mostPopular = max(mostPopular, m[combination]);
            }
        }
        int counter = 0;
        for (const auto& it : m){
            if (it.second == mostPopular){
                counter += it.second;
            }
        }
        cout << counter << endl;
    }
    return 0;
}