#include <iostream>
using namespace std;

char* rotateMatrix(char* matrix, int n){
    int length = n-1;
    for (int i = 0; i <= length/2 ; ++i) {
        for (int j = i; j < length-i; ++j) {
            char a = matrix[(i*n)+j];
            char b = matrix[(j*n)+length-i];
            char c = matrix[(length-i)*n+length-j];
            char d = matrix[(length-j)*n+i];

            matrix[(j*n)+length-i] = a;
            matrix[(length-i)*n+length-j] = b;
            matrix[(length-j)*n+i] = c;
            matrix[(i*n)+j] = d;
        }
    }
    return matrix;
}
char* verticalReflection(char* matrix, int n){
    int length = n-1;
    for (int i = 0; i <= length/2; ++i) {
        for (int j = 0; j < n; ++j) {
            swap(matrix[(i*n)+j],matrix[(length-i)*n+j]);
        }
    }
    return matrix;
}
bool preservation(const char* matrix1, const char* matrix2, int n){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(matrix1[(i*n)+j] != matrix2[(i*n)+j])
                return false;
        }
    }
    return true;
}
void readMatrices(char *matrix1, char *matrix2, int n){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin>>matrix1[(i*n)+j];
        }
        cin.ignore();
        for (int j = 0; j < n; ++j) {
            cin>>matrix2[(i*n)+j];
        }
    }
}
/*void printMatrix(const char* matrix, int n){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[(i*n)+j];
        }
        cout << endl;
    }
    cout << endl;
}*/
int main() {
    int n , counter = 1;
    while(cin>>n){
        char* original = new char[n*n];
        char* transformed = new char[n*n];
        readMatrices(original, transformed, n);
        if(preservation(original,transformed,n)){
            cout << "Pattern " << counter++ << " was preserved.";
        }
        else if(preservation(rotateMatrix(original,n),transformed,n)){
            cout << "Pattern " << counter++ << " was rotated 90 degrees.";
        }
        else if(preservation(rotateMatrix(original,n),transformed,n)){
            cout << "Pattern " << counter++ << " was rotated 180 degrees.";
        }
        else if(preservation(rotateMatrix(original,n),transformed,n)){
            cout << "Pattern " << counter++ << " was rotated 270 degrees.";
        }
        else{
            original = rotateMatrix(original,n);
            if(preservation(verticalReflection(original,n),transformed,n)){
                cout << "Pattern " << counter++ << " was reflected vertically.";
            }
            else if(preservation(rotateMatrix(original,n),transformed,n)){
                cout << "Pattern " << counter++ << " was reflected vertically and rotated 90 degrees.";
            }
            else if(preservation(rotateMatrix(original,n),transformed,n)){
                cout << "Pattern " << counter++ << " was reflected vertically and rotated 180 degrees.";
            }
            else if(preservation(rotateMatrix(original,n),transformed,n)){
                cout << "Pattern " << counter++ << " was reflected vertically and rotated 270 degrees.";
            }
            else{
                cout << "Pattern " << counter++ << " was improperly transformed.";
            }
        }
        cout << endl;
    }
    return 0;
}