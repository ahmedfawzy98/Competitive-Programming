#include <iostream>
#include <cstring>

using namespace std;
int t, n, k, numbers[10000];

bool check_divisibility(int index, int sum){
    if(index == n && abs(sum) % k == 0) return true;
    if(index == n) return false;
    return check_divisibility(index + 1, sum + numbers[index]) ||
    check_divisibility(index + 1, sum - numbers[index]);
}

bool dynamic_programming(){
    bool table[n + 1][k + 1];
    memset(table, false, sizeof(table));

    int value = numbers[0] % k;
    if(value < 0) value += k;
    table[1][value] = true;
    for (int i = 2; i <= n; ++i) {
        for (int j = 0; j < k; ++j) {
            if(table[i - 1][j]){
                value = j + numbers[i - 1];
                value %= k;
                if(value < 0) value += k;
                table[i][value] = true;

                value = j - numbers[i - 1];
                value %= k;
                if(value < 0) value += k;
                table[i][value] = true;
            }
        }
    }
    return table[n][0];
}

int main() {
    cin >> t;
    while(t--){
        cin >> n >> k;
        for (int i = 0; i < n; ++i) {
            cin >> numbers[i];
        }
//        memset(table, false, sizeof(table));
//        bool x = check_divisibility(1, numbers[0]);
        bool x = dynamic_programming();
        if(x){
            cout << "Divisible" << endl;
        }else{
            cout << "Not divisible" << endl;
        }
    }
    return 0;
}