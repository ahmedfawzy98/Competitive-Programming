#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n, r, c, sr, sc;
    string insts;
    cin >> t;
    for (int k = 1; k <= t; ++k) {
        cin >> n >> r >> c >> sr >> sc >> insts;
//        bool **grid = new bool*[r];
        vector<vector<bool>> grid(r, vector<bool> (c, false));
//        for (int i = 0; i < r; ++i) {
//            grid[i] = new bool[c];
//        }
        grid[--sr][--sc] = true;
        for (auto i : insts){
            if (i == 'E'){
                sc++;
                while (grid[sr][sc]){
                    sc++;
                }
                grid[sr][sc] = true;
            }else if (i == 'W'){
                sc--;
                while (grid[sr][sc]){
                    sc--;
                }
                grid[sr][sc] = true;
            }else if (i == 'N'){
                sr--;
                while (grid[sr][sc]){
                    sr--;
                }
                grid[sr][sc] = true;
            }else if (i == 'S'){
                sr++;
                while (grid[sr][sc]){
                    sr++;
                }
                grid[sr][sc] = true;
            }
        }
        cout << "Case #" << k << ": " << ++sr << " " << ++sc << endl;
//        for (int j = 0; j < r; ++j) {
//            delete[] grid[j];
//        }
//        delete[] grid;
    }
    return 0;
}