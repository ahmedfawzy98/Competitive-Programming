#include <iostream>
#include <vector>
#include <sstream>
#include <cstdio>

using namespace std;
typedef vector<vector<int>> ii;

int main() {
    int n, m, tmp;
    while (cin >> n >> m){
        ii adjList;
        adjList.assign(1000000,vector<int>());
        for (int i = 0; i < n; ++i) {
            cin >> tmp;
            adjList[tmp].push_back(i + 1);
        }
        for (int j = 0; j < m; ++j) {
            cin >> n >> tmp;
            if (adjList[tmp].size() < n){
                cout << 0 << endl;
            }else{
                cout << adjList[tmp][n-1]<< endl;
            }
        }
    }
    return 0;
}