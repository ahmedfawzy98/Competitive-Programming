#include <iostream>
#include <cstring>
using namespace std;

int common_sequence(string s1, string s2){
    int length_1 = s1.length(), length_2 = s2.length();
    int table[length_1 + 1][length_2 + 1];
    memset(table, 0, sizeof(table));
    for (int i = 1; i <= length_1; ++i) {
        for (int j = 1; j <= length_2; ++j) {
            if(s1[i - 1] == s2[j - 1]){
                table[i][j] = 1 + table[i - 1][j - 1];
            }else{
                table[i][j] = max(table[i - 1][j], table[i][j - 1]);
            }
        }
    }
    return table[length_1][length_2];
}

int main() {
    string s1, s2;
    int t = 1;
    while(getline(cin, s1), s1[0] != '#'){
        getline(cin, s2);
        cout << "Case #" << t++ << ": you can visit at most " << common_sequence(s1, s2) << " cities." << endl;
    }
    return 0;
}