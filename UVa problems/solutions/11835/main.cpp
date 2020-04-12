#include <iostream>
#include <vector>

using namespace std;

int main() {
    int g,p,s,k,tmp;
    while(cin>>g>>p, g){
        int pilots[110][110];
        for (int i = 0; i < g; ++i) {
            for (int j = 1; j <= p; ++j) {
                cin>>tmp;
                pilots[i][tmp-1] = j;
            }
        }
        cin>>s;
        for (int l = 0; l < s; ++l) {
            int points[110] = {};
            cin>>k;
            for (int i = 0; i < k; ++i) {
                cin>>tmp;
                for (int j = 0; j < g; ++j) {
                    points[pilots[j][i]] += tmp;
                }
            }
            vector<int> ans;
            int max = -1;
            for (int m = 1; m <= p; ++m) {
                if(max < points[m]){
                    ans.clear();
                    max = points[m];
                    ans.push_back(m);
                }
                else if(max == points[m]){
                    ans.push_back(m);
                }
            }
            for (int n = 0; n < ans.size(); ++n) {
                cout << ans[n];
                if(n < ans.size()-1){cout << " ";}
            }
            cout << endl;
        }
    }
    return 0;
}