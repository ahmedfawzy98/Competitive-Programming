#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int dynamic_programming_knapsack(int ws[], int vs[], int w, int n){
    int f[n + 1][w + 1];
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= w; ++j) {
            if(i == 0 || j == 0){
                f[i][j] = 0;
            }else if(ws[i - 1] > j){
                f[i][j] = f[i - 1][j];
            }else{
                f[i][j] = max(vs[i - 1] + f[i - 1][j - ws[i - 1]], f[i - 1][j]);
            }
        }
    }
    vector<int> types;
    int result = f[n][w], x = w;
//    printf("result = %d\n", result);
    for(int i = n; i > 0 && result > 0; i--){
        if(result == f[i - 1][x]){ continue;}
        else{
            types.push_back(i - 1);
//            printf("%d ", ws[i - 1]);
            result -= vs[i - 1];
            x -= ws[i - 1];
        }
    }
    cout << types.size() << endl;
    for(auto i = types.rbegin(); i != types.rend(); i++){
        cout << *i << ' ';
    }

}

int main() {
    int vs[] = {2,5,6,82534
    };
    int ws[] = {2, 5, 6, 8};
    int w = 17, n = sizeof(vs) / sizeof(int);
    dynamic_programming_knapsack(ws, vs, w, n);
    return 0;
}