#include <iostream>
#include <vector>
using namespace std;
char arena[100][100];
int main() {
    int n, m, s;
    pair<int, pair<int,bool>> begin;
    while (cin >> n >> m >> s, n && m && s){
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> arena[i][j];
                if (arena[i][j] == 'N' || arena[i][j] == 'S' || arena[i][j] == 'L' || arena[i][j] == 'O'){
                    begin.first = i; begin.second.first = j; begin.second.second = true;
                }
            }
        }
        char inst, dir;
        int i = begin.first, j = begin.second;
        for (int k = 0; k < s; ++k) {
            cin >> inst;
            if (arena[i][j] == 'N' && begin.second.second) dir = 0;
            else if (arena[i][j] == 'N' && begin.second.second) dir = 1;
            else if (arena[i][j] == 'N' && begin.second.second) dir = 2;
            else if (arena[i][j] == 'N' && begin.second.second) dir = 3;
            if
        }

    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}