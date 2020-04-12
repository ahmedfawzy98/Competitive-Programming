#include <iostream>
#include <cstring>

using namespace std;

int recursion_knapsack(int ws[], int vs[], int w, int n){
    if(n == 0 || w == 0){
        return 0;
    }
    if(ws[n - 1] > w){
        return recursion_knapsack(ws, vs, w, n - 1);
    }else{
        return max(vs[n - 1] + recursion_knapsack(ws, vs, w - ws[n - 1], n - 1),
                recursion_knapsack(ws, vs, w, n - 1));
    }
}

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
    return f[n][w];
}

int dp_knapsack_space_optimized(int ws[], int vs[], int w, int n){
    int f[2][w + 1];
    memset(f, 0, sizeof(f));
    int i = 0;
    while(i < n){
        int j = 0;
        if(i & 1){
            while(++j <= w){
                if(j < ws[i]){
                    f[1][j] = f[0][j];
                }else{
                    f[1][j] = max(vs[i] + f[0][j - ws[i]], f[0][j]);
                }
            }
        }else{
            while(++j <= w){
                if(j < ws[i]){
                    f[0][j] = f[1][j];
                }else{
                    f[0][j] = max(vs[i] + f[1][j - ws[i]], f[1][j]);
                }
            }
        }
        i++;
    }
    return ((n & 1) ? f[0][w]: f[1][w]);
}

int main() {
    int vs[] = {10, 40, 30, 50};
    int ws[] = {5, 4, 6, 3};
    int w = 10; int n = sizeof(vs) / sizeof(int);
    int result;

    clock_t time = clock();
    result = recursion_knapsack(ws, vs, w, n);
    time = clock() - time;
    cout << "Result = " << result << endl;
    printf("Time taken (recursion)= %f\n", (double) time / CLOCKS_PER_SEC);

    time = clock();
    result = dynamic_programming_knapsack(ws, vs, w, n);
    time = clock() - time;
    cout << "Result = " << result << endl;
    printf("Time taken (dynamic programming)= %f\n", (double) time / CLOCKS_PER_SEC);

    time = clock();
    result = dp_knapsack_space_optimized(ws, vs, w, n);
    time = clock() - time;
    cout << "Result = " << result << endl;
    printf("Time taken (dynamic programming space optimized)= %f\n", (double) time / CLOCKS_PER_SEC);
    return 0;
}