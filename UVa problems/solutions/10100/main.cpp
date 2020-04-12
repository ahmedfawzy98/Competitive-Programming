#include <iostream>
#include <cstring>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    vector<string> v1, v2;
    string s1, s2, temp;
    int t = 1, lcs[501][501];
    bool equal_sections[500][500];
    while(getline(cin, s1)){
        getline(cin, s2);
        if(s1.empty() || s2.empty()){
            cout.width(2);
            cout << right << t++ << ". Blank!" << endl;
        }else{
            for (char & i : s1) {if(!islower(i) && !isupper(i) && !isdigit(i)){ i = ' ';}}
            for (char & i : s2) {if(!islower(i) && !isupper(i) && !isdigit(i)){ i = ' ';}}
            v1.clear(); v2.clear();

            stringstream ss1(s1), ss2(s2);
            while(ss1 >> temp) v1.push_back(temp);
            while(ss2 >> temp) v2.push_back(temp);
            int length_1 = v1.size(), length_2 = v2.size();

            for (int j = 0; j < length_1; ++j) {
                for (int i = 0; i < length_2; ++i) {
                    equal_sections[j][i] = v1[j] == v2[i];
                }
            }

            memset(lcs, 0, sizeof(lcs));
            for (int k = 1; k <= length_1; ++k) {
                for (int i = 1; i <= length_2; ++i) {
                    if(equal_sections[k - 1][i - 1]) lcs[k][i] = 1 + lcs[k - 1][i - 1];
                    else lcs[k][i] = max(lcs[k - 1][i], lcs[k][i - 1]);
                }
            }
            cout.width(2);
            cout << right << t++ << ". Length of longest match: " << lcs[length_1][length_2] << endl;
        }
    }
    return 0;
}