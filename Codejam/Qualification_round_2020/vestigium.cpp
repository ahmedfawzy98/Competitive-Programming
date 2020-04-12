#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main(){
    int T, N, temp, case_number = 1;
    unordered_set<int> rset, cset;
    cin >> T;
    while(case_number <= T){
        cin >> N;
        vector<vector<int>> mat(N, vector<int>(N, 0));
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cin >> mat[i][j];
            }
        }
        int k = 0, r = 0, c = 0;
        for(int i = 0; i < N; i++){
            rset.clear();
            cset.clear();
            for(int j = 0; j < N; j++){
                if(rset.find(mat[i][j]) != rset.end()){r++; break;}
                else{rset.insert(mat[i][j]);}
            }
            for(int j = 0; j < N; j++){
                if(cset.find(mat[j][i]) != rset.end()){c++; break;}
                else{cset.insert(mat[j][i]);}
            }
            k += mat[i][i];
        }
        cout << "Case #" << case_number++ << ": " << k << " " << r << " " << c << endl;
    }
}
