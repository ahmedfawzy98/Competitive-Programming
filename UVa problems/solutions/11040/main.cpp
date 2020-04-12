#include <iostream>
using namespace std;
void addNums(int wall[][9], int i, int j){
    wall[i+2][j+1] = (wall[i][j] - (wall[i+2][j] + wall[i+2][j+2])) / 2;
    wall[i+1][j] = wall[i+2][j] + wall[i+2][j+1];
    wall[i+1][j+1] = wall[i+2][j+2] + wall[i+2][j+1];
}
int main() {
    int n;
    cin>>n;
    while(n--){
        int wall[9][9] = {};
        for (int i = 0; i < 10; i += 2) {
            for (int j = 0; j < i+1; j += 2) {
                cin>>wall[i][j];
            }
        }
        for (int k = 0; k < 7; k +=2) {
            for (int i = 0; i < k+1; i+=2) {
                addNums(wall,k,i);
            }
        }
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < i+1; ++j) {
                cout << wall[i][j];
                if(j < i){cout << " ";}
            }
            cout << endl;
        }
    }
    return 0;
}