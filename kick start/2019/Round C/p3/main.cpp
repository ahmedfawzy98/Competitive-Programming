#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n, k, tmp;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        cin >> n >> k;
        vector<pair<int, int>> dogs;
        for (int j = 0; j < n; ++j) {
            cin >> tmp;
            dogs.emplace_back(tmp,0);
        }
        for (int j = 0; j < n; ++j) {
            cin >> dogs[j].second;
        }
        sort(dogs.begin(), dogs.end());
        queue<int> q;
        q.push(0);
        k--;
        int cost_1 = 0, cost_2 = 0, minCost;
        while (!q.empty()){
            int x = q.front(), d = dogs[x].first;
            q.pop();
            if (x + 2 < n){
                if (dogs[x + 1].second == dogs[x].second){
                    cost_1 = dogs[x + 1].first - d;
                }else{
                    cost_1 = d + dogs[x + 1].first;
                }
                if (dogs[x + 2].second == dogs[x].second){
                    cost_2 = dogs[x + 2].first - d;
                }else{
                    cost_2 = d + dogs[x + 2].first;
                }
                q.push(x + 1);
                q.push(x + 2);
            }else{
                if (dogs[x - 1].second == dogs[x].second){
                    cost_1 = d - dogs[x - 1].first;
                }else{
                    cost_1 = d + dogs[x - 1].first;
                }
                if (dogs[x + 1].second == dogs[x].second){
                    cost_2 = dogs[x + 1].first - d;
                }else{
                    cost_2 = dogs[x + 1].first + d;
                }
                q.push(x - 1);
                q.push(x + 1);
            }

        }

    }
    return 0;
}