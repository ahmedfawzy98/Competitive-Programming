#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, r, c, k;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        cin >> r >> c >> k;
        vector<vector<int>> board(r, vector<int>(c));
        for (int j = 0; j < r; ++j) {
            for (int l = 0; l < c; ++l) {
                cin >> board[j][l];
            }
        }
        int sum = 0;
        for (int m = 0; m < r; ++m) {
            int max = -1, min = 1001;
            for (int j = 0; j < c; ++j) {
                if (board[m][j] < min){min = board[m][j];}
                if (board[m][j] > max){max = board[m][j];}
            }
            if (abs(min - max) <=  k){sum += c;}
            else{
                for (int j = 0; j < r; ++j) {

                }
            }
        }
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}