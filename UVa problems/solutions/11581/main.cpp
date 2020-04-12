#include <iostream>
using namespace std;
bool check(int matrix[][3]){
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if(matrix[i][j]){
                return false;
            }
        }
    }
    return true;
}

void transform(int matrix[][3], int x[][3]){
    x[0][0] = (matrix[0][1] + matrix[1][0]) % 2;
    x[0][1] = (matrix[0][0] + matrix[1][1] + matrix[0][2]) % 2;
    x[0][2] = (matrix[0][1] + matrix[1][2]) % 2;
    x[1][0] = (matrix[0][0] + matrix[1][1] + matrix[2][0]) % 2;
    x[1][1] = (matrix[0][1] + matrix[1][0] + matrix[2][1] + matrix[1][2]) % 2;
    x[1][2] = (matrix[0][2] + matrix[1][1] + matrix[2][2]) % 2;
    x[2][0] = (matrix[1][0] + matrix[2][1]) % 2;
    x[2][1] = (matrix[2][0] + matrix[1][1] + matrix[2][2]) % 2;
    x[2][2] = (matrix[2][1] + matrix[1][2]) % 2;
}
int main() {
    int n;
    char c;
    cin>>n;
    while(n--){
        int matrix[3][3],tmp[3][3], counter = 0;
        cin.ignore();
        cin.ignore();
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cin>>c;
                matrix[i][j] = c - 48;
            }
        }
        if(check(matrix)){
            cout << "-1" << endl;
        }
        else{
            while(!check(matrix)){
                counter++;
                transform(matrix,tmp);
                swap(matrix,tmp);
            }
            cout << counter-1 << endl;
        }
    }
    return 0;
}
/*#include <iostream>

using namespace std;
void transform(int matrix[3][3]){
    int sum,temp[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            sum = 0;
            if(i-1 >= 0){
                sum += matrix[i-1][j];
            }
            if(i+1 < 3){
                sum += matrix[i+1][j];
            }
            if(j+1 < 3){
                sum += matrix[i][j+1];
            }
            if(j-1 >= 0){
                sum += matrix[i][j-1];
            }
            temp[i][j] = sum % 2;
        }
    }
    for (int k = 0; k < 3; ++k) {
        for (int i = 0; i < 3; ++i) {
            matrix[k][i] = temp[k][i];
        }
    }
}
bool check(int matrix[3][3]){
    int sum = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            sum += matrix[i][j];
        }
    }
    return !sum;
}
int main(){
    int t,k,temp;
    int matrix[3][3];
    cin>>t;
    while(t--){
        for (int i = 0; i < 3; ++i) {
            cin>>temp;
            for (int j = 2; j > -1; --j) {
                matrix[i][j] = temp % 10;
                temp /= 10;
            }
        }
        if(check(matrix)){
            cout << -1 << endl;
        }
        else{
            k = -1;
            do{
                k++;
                transform(matrix);
            }while(!check(matrix));
            cout << k << endl;
        }
    }
    return 0;
}*/