#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, tmp1, tmp2;
    while (cin >> n){
        vector<pair<int,int>>vec;
        for (int i = 0; i < n; ++i) {
            cin >> tmp1 >> tmp2;
            vec.emplace_back(tmp1, tmp2);
        }
        int counter = 0;
        for (int j = 0; j < n; ++j) {
            for (int i = 0; i < n; ++i) {
                if (i == j)continue;
                if (vec[j].first  == vec[i].second){
                    counter++;
                }
            }
        }
        cout << counter << endl;
    }
    return 0;
}