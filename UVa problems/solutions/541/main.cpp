#include <iostream>

using namespace std;
bool checkParity(const int* matrix, int n){
    bool check = true;
    int sum;
    /*check rows*/
    for (int i = 0; i < n; ++i) {
        sum = 0;
        for (int j = 0; j < n; ++j) {
            sum += matrix[(i*n)+j];
        }
        if(sum % 2 != 0){
            check = false;
            break;
        }
    }
    if(check){
        /*check columns*/
        for (int i = 0; i < n; ++i) {
            sum = 0;
            for (int j = 0; j < n; ++j) {
                sum += matrix[(j*n)+i];
            }
            if(sum % 2 != 0){
                check = false;
                break;
            }
        }
    }
    return check;
}
bool changingBit(int* matrix, int n, int &i, int &j){
    for (int k = 0; k < n; ++k) {
        for (int l = 0; l < n; ++l) {
            if(matrix[(k*n)+l] == 1) {
                matrix[(k*n)+l] = 0;
            }
            else{
                matrix[(k*n)+l] = 1;
            }
            if(checkParity(matrix,n)){
                i = k+1;
                j = l+1;
                return true;
            }
            else{
                matrix[(k*n)+l] = abs(matrix[(k*n)+l] - 1);
            }
        }
    }
    return false;
}
int main() {
    int n,x,y;
    while(cin>>n,n){
        int *matrix = new int[n*n];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin>>matrix[(i*n)+j];
            }
        }
        if(checkParity(matrix,n)){
            cout << "OK" << endl;
        }
        else{
            if(changingBit(matrix,n,x,y)){
                cout << "Change bit (" << x << "," << y << ")" << endl;
            }
            else{
                cout << "Corrupt" << endl;
            }
        }
    }
    return 0;
}