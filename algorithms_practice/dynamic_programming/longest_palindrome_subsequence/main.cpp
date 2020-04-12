#include <iostream>
#include <algorithm>

using namespace std;

void lps_dynamic_programming(string x, string y){
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

    cout << "LPS of " << x << " and " << y << " = " << lcs << " and its length = " << f[n][m] << endl;
}

int main() {
    string x = "character", temp = x;
    reverse(x.begin(), x.end());
    lps_dynamic_programming(temp, x);
    return 0;
}