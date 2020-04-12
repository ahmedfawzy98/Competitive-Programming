#include <iostream>

using namespace std;

void row(int matrix[][10], int n, int a, int b){
    for (int i = 0; i < n; ++i) {
        swap(matrix[a][i],matrix[b][i]);
    }
}
void col(int matrix[][10], int n, int a, int b){
    for (int i = 0; i < n; ++i) {
        swap(matrix[i][a],matrix[i][b]);
    }
}
void transpose(int matrix[][10], int n){
    for (int i = 0; i < n-1; ++i) {
        for (int j = i; j < n; ++j) {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
}
void inc(int matrix[][10], int n){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = (matrix[i][j] + 1) % 10;
        }
    }
}
void dec(int matrix[][10], int n){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j]--;
            if(matrix[i][j] == -1){matrix[i][j] = 9;}
        }
    }
}

void printMatrix(int matrix[][10], int n){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j];
        }
        cout << endl;
    }
    cout << endl;
}
int main() {
    int t,n,m,counter = 1,a,b;
    string command;
    cin>>t;
    while(t--){
        cin>>n;
        int matrix[10][10];
        for (int i = 0; i < n; ++i) {
            cin>>a;
            for (int j = n-1; j >= 0; j--) {
                matrix[i][j] = a%10;
                a /= 10;
                /*instead of this we can use chars
                 char c;
                 cin>>c;
                 matrix[i][j] = c - 48;*/
            }
        }
        cin>>m;
        for (int k = 0; k < m; ++k) {
            cin>>command;
            if(command == "row"){
                cin>>a>>b;
                row(matrix,n,a-1,b-1);
            }
            else if(command == "col"){
                cin>>a>>b;
                col(matrix,n,a-1,b-1);
            }
            else if(command == "inc"){
                inc(matrix,n);
            }
            else if(command == "dec"){
                dec(matrix,n);
            }
            else{
                transpose(matrix,n);
            }
        }
        cout << "Case #" << counter++ << endl;
        printMatrix(matrix,n);
    }
    return 0;
}