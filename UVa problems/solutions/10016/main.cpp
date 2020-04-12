#include <iostream>
#include <math.h>
using namespace std;
void upsideDown(int matrix[][100], int n, int ring){
    int length = n-1;
    for (int i = ring-1; i <= length/2; ++i) {
        for (int j = ring-1; j < n-ring+1; ++j) {
            if((i >= ring && i <= length-ring) && (j >= ring && j <= length-ring)){
                continue;
            }
            swap(matrix[i][j],matrix[length-i][j]);
        }
    }
}
void leftRight(int matrix[][100], int n, int ring){
    int length = n-1;
    for (int i = ring-1; i <= length/2; ++i) {
        for (int j = ring-1; j < n-ring+1; ++j) {
            if((i >= ring && i <= length-ring) && (j >= ring && j <= length-ring)){
                continue;
            }
            swap(matrix[j][i],matrix[j][length-i]);
        }
    }
}
void mainDiagonal(int matrix[][100], int n, int ring){
    int length = n-1;
    swap(matrix[ring-1][n-ring],matrix[n-ring][ring-1]);
    for (int i = ring; i < n-ring; ++i) {
        swap(matrix[n-ring][i],matrix[i][n-ring]);
        swap(matrix[length-i][ring-1],matrix[ring-1][length-i]);
    }
}
void mainInverseDiagonal(int matrix[][100], int n, int ring){
    int length = n-1;
    swap(matrix[ring-1][ring-1],matrix[n-ring][n-ring]);
    for (int i = ring-1 ; i < n-ring ; i++) {
        swap(matrix[ring-1][i],matrix[length-i][n-ring]);
        swap(matrix[i][ring-1],matrix[n-ring][length-i]);
    }
}
void printMatrix(int matrix[][100], int n){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j];
            if(n-j != 1)
                cout << " ";
        }
        cout << endl;
    }
}
int main() {
    int m,n,t,r,op;
    cin>>m;
    while(m--){
        cin>>n;
        int matrix[100][100];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin>>matrix[i][j];
            }
        }
        r = (int)ceil(n/2.0);
        for (int k = 0; k < r; ++k) {
            cin>>t;
            for (int i = 0; i < t; ++i) {
                cin>>op;
                if(op == 1){
                    upsideDown(matrix,n,k+1);
                }
                else if(op == 2){
                    leftRight(matrix,n,k+1);
                }
                else if(op == 3){
                    mainDiagonal(matrix,n,k+1);
                }
                else{
                    mainInverseDiagonal(matrix,n,k+1);
                }
            }
        }
        printMatrix(matrix,n);
    }
    return 0;
}