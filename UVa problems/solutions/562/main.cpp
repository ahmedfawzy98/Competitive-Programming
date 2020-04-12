#include <iostream>
#include <cstring>
using namespace std;

int dp[100][50000], coins[100] , total_sum, n, m;

int minimum_difference(int index, int current_sum){
    if(index == m) return abs(current_sum - (total_sum - current_sum));
    int &result = dp[index][current_sum];
    if(result != -1) return result;
    result = min(minimum_difference(index + 1, current_sum),
            minimum_difference(index + 1, current_sum + coins[index]));
    return result;
}

int bottom_up_manner(){
    int target = total_sum / 2;
    int table[m + 1][target + 1];
    memset(table, 0, sizeof(table));
    for (int i = 0; i <= total_sum; ++i) {
        table[0][i] = 0;
    }
    for (int j = 1; j <= m; ++j) {
        for (int i = 1; i <= target; ++i) {
            if(i < coins[j - 1]){table[j][i] = table[j - 1][i];}
            else{
                table[j][i] = max(coins[j - 1] + table[j - 1][i - coins[j - 1]], table[j - 1][i]);
            }
        }
    }
    return table[m][target];
}

int main() {
    cin >> n;
    while(n--){
        cin >> m;
        total_sum = 0;
        memset(dp, -1, sizeof dp);
        for (int i = 0; i < m; ++i) {
            cin >> coins[i];
            total_sum += coins[i];
        }
//        cout << minimum_difference(0, 0) << endl;
        int result = bottom_up_manner();
        cout << abs(result - (total_sum - result)) << endl;
    }
    return 0;
}