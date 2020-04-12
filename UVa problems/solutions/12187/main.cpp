#include <iostream>
using namespace std;
int n,r,c,k;
bool isEnemy(int x, int y){
    return (x + 1) % n == y;
}
void battle(int matrix[][101],int x[][101]){
    bool check[101][101] = {};
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            int a = i+1, b = i-1, d = j+1, e = j-1;
            if(a != r && isEnemy(matrix[i][j],matrix[a][j])){
                x[a][j] = matrix[i][j];
                check[a][j] = true;
            }
            if(b != -1 && isEnemy(matrix[i][j],matrix[b][j])){
                x[b][j] = matrix[i][j];
                check[b][j] = true;
            }
            if(d != c && isEnemy(matrix[i][j],matrix[i][d])){
                x[i][d] = matrix[i][j];
                check[i][d] = true;
            }
            if(e != -1 && isEnemy(matrix[i][j],matrix[i][e])){
                x[i][e] = matrix[i][j];
                check[i][e] = true;
            }
        }
    }
    for (int l = 0; l < r; ++l) {
        for (int i = 0; i < c; ++i) {
            if(!check[l][i]){
                x[l][i] = matrix[l][i];
            }
        }
    }
}
void printMatrix(int matrix[][101]){
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << matrix[i][j];
            if(j < c-1){cout << " ";}
        }
        cout << endl;
    }
}
int main() {
    while(cin>>n>>r>>c>>k,n){
        int matrix[101][101], tmp[101][101];
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                cin>>matrix[i][j];
            }
        }
        for (int l = 0; l < k; ++l) {
            battle(matrix,tmp);
            swap(matrix,tmp);
        }
        printMatrix(matrix);
    }
    return 0;
}