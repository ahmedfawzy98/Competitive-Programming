#include <iostream>

using namespace std;

int lcs_recursion(string x, string y, int n, int m){
    if(n == 0 || m ==  0){
        return 0;
    }
    if(x[n - 1] == y[m - 1]){
        return 1 + lcs_recursion(x, y, n -1, m - 1);
    }else{
        return max(lcs_recursion(x, y, n - 1, m), lcs_recursion(x, y, n, m -1));
    }
}

void lcs_dynamic_programming(string x, string y){
    int n = x.length(), m = y.length();
    int f[n + 1][m + 1];
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            if(i == 0 || j == 0){
                f[i][j] = 0;
            }else if(x[i - 1] == y[j - 1]){
                f[i][j] = f[i - 1][j - 1] + 1;
            }else{
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            }
        }
    }
    int index = f[n][m], i = n, j = m;
    char lcs[index + 1];
    lcs[index] = '\0';
    while(i > 0 && j > 0){
        if(x[i - 1] == y[j - 1]){
            lcs[--index] = x[i - 1];
            i--; j--;
        }else if(f[i - 1][j] > f[i][j - 1]){
            i--;
        }else{
            j--;
        }
    }

    cout << "LCS of " << x << " and " << y << " = " << lcs << " and its length = " << f[n][m] << endl;
}

void lcs_dp_space_optimized(string x, string y){
    int n = x.length(), m = y.length();
    int f[2][m + 1];
    bool binary_index;
    for (int i = 0; i <= n; ++i) {
        binary_index = i & 1;
        for (int j = 0; j <= m; ++j) {
            if(i == 0 || j == 0){
                f[binary_index][j] = 0;
            }else if(x[i - 1] == y[j - 1]){
                f[binary_index][j] = f[1 - binary_index][j - 1] + 1;
            }else{
                f[binary_index][j] = max(f[1 - binary_index][j], f[binary_index][j - 1]);
            }
        }
    }
    int index = f[binary_index][m], i = n, j = m;
    char lcs[index + 1];
    lcs[index] = '\0';
    while(i > 0 && j > 0){
        if(x[i - 1] == y[j - 1]){
            lcs[--index] = x[i - 1];
            i--; j--;
        }else if(f[1 - binary_index][j] > f[binary_index][j - 1]){
            i--;
        }else{
            j--;
        }
    }

    cout << "LCS of " << x << " and " << y << " = " << lcs << " and its length = " << f[binary_index][m] << endl;
}

//void longest_palindrome(string )

int main() {
    string x = "character", y = "retcarahc";
    int n = x.length(), m = y.length(), result;

    clock_t time = clock();
    result = lcs_recursion(x, y, n, m);
    time = clock() - time;
    cout << "Length of LCS = " << result << endl;
    printf("Time taken (recursion)= %f\n", (double) time / CLOCKS_PER_SEC);

    time = clock();
    lcs_dynamic_programming(x, y);
    time = clock() - time;
//    cout << "Length of LCS = " << result << endl;
    printf("Time taken (dynamic programming)= %f\n", (double) time / CLOCKS_PER_SEC);


    time = clock();
    lcs_dp_space_optimized(x, y);
    time = clock() - time;
//    cout << "Length of LCS = " << result << endl;
    printf("Time taken (dynamic programming space optimized)= %f\n", (double) time / CLOCKS_PER_SEC);

    return 0;
}