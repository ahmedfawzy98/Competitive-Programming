#include <iostream>
#include <algorithm>

using namespace std;

bool subset_sum_dp(int set[], int sum, int size){
    int f[size + 1][size + 1];
    for (int i = 0; i <= size; ++i) {
        for (int j = 0; j <= size; ++j) {
            if(i == 0 || j == 0){
                f[i][j] = 0;
            }else if(set[i - 1] + set[j - 1] > sum){
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
            }else{
                f[i][j] = max(max(f[i - 1][j], f[i][j - 1]), set[i - 1] + set[j - 1]);
            }
        }
    }
    int index = f[size][size], i = size, j = size, k = 0;
    int subset[size + 1];
    while(i > 0 && j > 0){
        if(set[i - 1] + set[j - 1] == sum){
            subset[k++] = set[i - 1];
            index -= set[i - 1];
            i--; j = size;
        }else if(f[i - 1][j] > f[i][j - 1]){
            i--;
        }else{
            j--;
        }
    }

    cout << "The subset = [";
    for(int i = k - 1; i > -1; i--){
        cout << subset[i];
        if(i != 0){cout << ' ';}
    }
    cout << "] and its length = " << k << endl;
}

int main() {
    int set[] = {7,33,4,14,5,1}, sum = 9, size = sizeof(set) / sizeof(int);
    subset_sum_dp(set, sum, size);
    return 0;
}