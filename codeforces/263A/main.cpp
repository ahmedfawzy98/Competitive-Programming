#include <iostream>
using namespace std;

int main() {
    int matrix[5][5], row, col;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> matrix[i][j];
            if (matrix[i][j]) {row = i + 1; col = j + 1;}
        }
    }
    cout << abs(3 - row) + abs(3 - col) << endl;
    return 0;
}