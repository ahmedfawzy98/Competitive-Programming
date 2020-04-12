#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    while(cin>>n, n){
        cin.ignore();
        vector<string> imgRows;
        string tmp;
        int m = -1;
        while(n--){
            getline(cin,tmp);
            tmp.erase(remove(tmp.begin(),tmp.end(),' '),tmp.end());
            imgRows.push_back(tmp);
            m = max(m,(int)tmp.length());
        }
        int sum = 0;
        for (int i = 0; i < imgRows.size(); ++i) {
            sum += m - imgRows[i].length();
        }
        cout << sum << endl;
    }
    return 0;
}