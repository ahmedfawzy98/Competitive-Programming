#include <iostream>

using namespace std;
bool symmetric(long matrix[][101], int n){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(matrix[i][j] != matrix[n-i-1][n-j-1]){
                return false;
            }
        }
    }
    return true;
}
int main() {
    int t, n, counter = 1;
    cin>>t;
    while(t--){
        cin.ignore(4);
        cin>>n;
        bool check = true;
        long matrix[101][101];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin>>matrix[i][j];
                if(matrix[i][j] < 0){
                    check = false;
                }
            }
        }
        cout << "Test #" << counter++ << ": ";
        if(check && symmetric(matrix,n)){
            cout << "Symmetric." << endl;
        }
        else{
            cout << "Non-symmetric." << endl;
        }
    }
    return 0;
}