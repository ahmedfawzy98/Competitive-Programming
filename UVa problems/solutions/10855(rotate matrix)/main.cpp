/*
    rotate matrix with extra space clock wise

#include <iostream>
using namespace std;
void rotateExtraSpace(const char *arr, char *arr2, int n){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr2[(j*n)+n-i-1] = arr[(i*n)+j];
        }
    }
}
int found(char *arr1,char *arr2, int N, int n){
    int counter = 0, tmp;
    bool check;
    for (int i = 0; i <= N-n; ++i) {
        for (int j = 0; j <= N-n; ++j) {
            check = true;
            tmp = 0;
            for (int k = 0; k < n; ++k) {
                for (int l = 0; l < n; ++l) {
                    if(arr1[((i+k)*N)+j+l] == arr2[(k*n)+l]){
                        tmp++;
                        if(tmp == n*n){
                            counter++;
                        }
                    }
                    else{
                        check = false;
                        break;
                    }
                }
                if(!check){
                    break;
                }
            }
        }
    }
    return counter;
}

void printArray(char *arr, int N){
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << arr[(i*N)+j];
        }
        cout << endl;
    }
    cout << endl << endl;
}
int main() {
    int  N, n;
    while(cin>>N>>n,N && n){
        char *bigArr, *smallArr, *x;
        bigArr = new char[N*N];
        smallArr = new char[n*n];
        x = new char[n*n];
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cin>> bigArr[(i*N)+j];
            }
        }
        for (int k = 0; k < n; ++k) {
            for (int i = 0; i < n; ++i) {
                cin>> smallArr[(k*n)+i];
            }
        }
        cout << found(bigArr,smallArr,N,n) << " ";
        rotateExtraSpace(smallArr, x, n);
        swap(smallArr,x);
        cout << found(bigArr,smallArr,N,n) << " ";
        rotateExtraSpace(smallArr, x, n);
        swap(smallArr,x);
        cout << found(bigArr,smallArr,N,n) << " ";
        rotateExtraSpace(smallArr, x, n);
        swap(smallArr,x);
        cout << found(bigArr,smallArr,N,n) << endl;
        delete[] bigArr;
        delete[] x;
        delete[] smallArr;
    }
    return 0;
}*/

/* rotate matrix inplace clock wise*/
#include <iostream>
using namespace std;
void rotateInplace(char *arr, int n){
    int length = n-1;
    for (int i = 0; i <= length/2; ++i) {
        for (int j = i; j < length-i; ++j) {
            char a = arr[(i*n)+j];
            char b = arr[(j*n)+length-i];
            char c = arr[((length-i)*n)+length-j];
            char d = arr[((length-j)*n)+i];

            arr[(j*n)+length-i] = a;
            arr[((length-i)*n)+length-j] = b;
            arr[((length-j)*n)+i] = c;
            arr[(i*n)+j] = d;
        }
    }
}
int found(char *arr1,char *arr2, int N, int n){
    int counter = 0, tmp;
    bool check;
    for (int i = 0; i <= N-n; ++i) {
        for (int j = 0; j <= N-n; ++j) {
            check = true;
            tmp = 0;
            for (int k = 0; k < n; ++k) {
                for (int l = 0; l < n; ++l) {
                    if(arr1[((i+k)*N)+j+l] == arr2[(k*n)+l]){
                        tmp++;
                        if(tmp == n*n){
                            counter++;
                        }
                    }
                    else{
                        check = false;
                        break;
                    }
                }
                if(!check){
                    break;
                }
            }
        }
    }
    return counter;
}

/*void printArray(char *arr, int N){
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << arr[(i*N)+j];
        }
        cout << endl;
    }
    cout << endl << endl;
}*/
int main() {
    int  N, n;
    while(cin>>N>>n,N && n){
        char *bigArr, *smallArr;
        bigArr = new char[N*N];
        smallArr = new char[n*n];
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                cin>> bigArr[(i*N)+j];
            }
        }
        for (int k = 0; k < n; ++k) {
            for (int i = 0; i < n; ++i) {
                cin>> smallArr[(k*n)+i];
            }
        }
        cout << found(bigArr,smallArr,N,n) << " ";
        rotateInplace(smallArr,n);
        cout << found(bigArr,smallArr,N,n) << " ";
        rotateInplace(smallArr,n);
        cout << found(bigArr,smallArr,N,n) << " ";
        rotateInplace(smallArr,n);
        cout << found(bigArr,smallArr,N,n) << endl;
        delete[] bigArr;
        delete[] smallArr;
    }
    return 0;
}